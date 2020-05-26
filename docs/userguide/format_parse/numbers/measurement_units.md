# Measurement Units

TODO(hugovdm,younies): this is a work in progress. This document should be
cleaned up before merging into the upstream unicode-org ICU repository. Some of
this content belongs in header files.

## Internal Implementation Details: ICU4C

Currently the ICU4C implementation has the following (an evolved implementation
rather than a designed):

* **class ConversionRateInfo:** simply a set of opaque strings from the units
  resources. (unitsdata.h)
* **class ConversionRates:** a container class for ConversionRateInfo, loads
  information from units resources. (unitsdata.h)
* **class ConversionRate:** encapsulates numeric conversion rate info, symbolic
  info already dropped.

* **class UnitConverter:** converts from a source to a target.
    * Stores numeric conversion information in **ConversionRate
      conversionRate_**.
    * Populates the **conversionRate_** instance from **ConversionRates**
      construction time.
    * **unitConstants** (from units.txt) are hard-coded.

## ICU4J Implementation

We already have an ICU4C implementation essentially serving as a prototype. In
the process of porting to ICU4J, we can make some improvements, after which we
could also backport the improvements back to ICU4C.

### class ConversionFactor

I propose when we load unit conversion resources, at data-loading time, we also
load the unitConstants, perhaps into a trie, and parse all the conversion
factors into a symbolic format.

The class can support both symbolic and numeric operations. Taking the product
of two conversion factors will do symbolic maths to cancel out constants as
appropriate, and provide numeric values when conversion factors are required.
