<!---
Copyright (C) 2018 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->

Commit Report
=============

Environment:
- Latest Commit: c263b5b370ca6de3746338e8451acdb174619823
- Jira Query: project=ICU AND fixVersion=69.1
- Rev Range: release-68-2..upstream/master
- Authenticated: Yes

## Problem Categories
### Closed Issues with No Commit
Tip: Tickets with type 'Task' or 'User Guide' or resolution 'Fixed by Other Ticket' are ignored.

- ICU-21479: `Add unum_formatDecimalCurrency (to avoid truncating or rounding large amounts)`
	- Assigned to Shane Carr
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21479

### Closed Issues with Illegal Resolution or Commit
Tip: Fixed tickets should have resolution 'Fixed by Other Ticket' or 'Fixed'.
Duplicate tickets should have their fixVersion tag removed.
Tickets with resolution 'Fixed by Other Ticket' are not allowed to have commits.

- ICU-21479: `Add unum_formatDecimalCurrency (to avoid truncating or rounding large amounts)`
	- Assigned to Shane Carr
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21479


### Commits without Jira Issue Tag
Tip: If you see your name here, make sure to label your commits correctly in the future.

*Success: No problems in this category!*

### Commits with Jira Issue Not Found
Tip: Check that these tickets have the correct fixVersion tag.

*Success: No problems in this category!*

### Commits with Open Jira Issue
Tip: Consider closing the ticket if it is fixed.

#### Issue ICU-20886

- ICU-20886: `Add option to remove fraction digits on integers after rounding`
	- Assigned to Shane Carr
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20886

##### Commits with Issue ICU-20886

- b79c299 `ICU-20886 Implement trailingZeroDisplay`
	- Authored by Shane F. Carr <shane@unicode.org>
	- Committed at 2021-03-04T08:19:59-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b79c299f90d4023ac237db3d0335d568bf21cd36

#### Issue ICU-20941

- ICU-20941: `Add formatting for sequence and arbitrary compound units`
	- Assigned to Hugo van der Merwe
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20941

##### Commits with Issue ICU-20941

- 56fb139 `ICU-20941 Port Arbitrary Units support from ICU4C to ICU4J`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2021-03-02T20:34:19+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/56fb139fc07d0ffd7a38d35e1afedd3a3e35824a

- 8b48e18 `ICU-20941 Fix uninitialized values: DerivedComponents' compound0_ and compound1_`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2021-02-24T21:15:50-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/8b48e1862c2ee8571859ee5efecc5e02c278bffe

- aebe91c `ICU-20941 Fix ResourceTable lifetime to make ResourceTracer happy`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2021-02-24T09:27:39+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/aebe91cdda5293cfd0940e66d635a761ca1307d7

- b2d97eb `ICU-20941 NumberFormatter: format arbitrary compound units, with inflections`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2021-02-24T09:27:39+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b2d97ebcb4aaa968302fa5f2fd86fc07eb65914f

- 710fa5a `ICU-20941 Support formatting joule-per-furlong (builtin-per-builtin).`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2020-11-04T18:07:09+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/710fa5aaf9a155f67a9995911dbe8d5c40b56458

#### Issue ICU-21018

- ICU-21018: `500+ spelling errors in various source files`
	- Assigned to Peter Edberg
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21018

##### Commits with Issue ICU-21018

- bd3b202 `ICU-21018 Fix typos across repo that start with letter A`
	- Authored by Erik Torres Aguilar <ertorres@microsoft.com>
	- Committed at 2021-01-06T15:15:35-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/bd3b2027415fa619cfe643c9becf7042f2c06439

- 6eea259 `ICU-21018 Fix typos across repo that start with letter C`
	- Authored by Erik Torres Aguilar <ertorres@microsoft.com>
	- Committed at 2021-01-06T15:15:26-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6eea259143bf312cc19fd253dd964192f87deb26

#### Issue ICU-21123

- ICU-21123: `Add support for unit inflections`
	- Assigned to Hugo van der Merwe
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21123

##### Commits with Issue ICU-21123

- 119dfa4 `ICU-21123 Support FormattedNumber::getGender() for "short" and "narrow" formatting too`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2021-03-05T00:32:30+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/119dfa4f2408ac47ad24ca67f29371f918b05cd0

- f6361eb `ICU-21123 Support unit inflections in ICU4J`
	- Authored by younies <younies@chromium.org>
	- Committed at 2021-02-24T17:27:09+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f6361ebf76c248e31965e1b306ebe08b118bb21f

- 1dbe70a `ICU-21123 Support unit inflections in ICU4C`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2021-02-17T23:36:40+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/1dbe70ac189328afc3b6515b2f1964445c07d1da

#### Issue ICU-21310

- ICU-21310: `minimize ICU4C & ICU4J readmes`
	- Assigned to Elango Cheran
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21310

##### Commits with Issue ICU-21310

- 73ab117 `ICU-21310 finish converting ICU4C and ICU4J Readmes to Markdown`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2020-12-03T13:12:15-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/73ab117a2dbbb7a0e627924ff99b925573c7014d

#### Issue ICU-21323

- ICU-21323: `Automate more BRS tasks`
	- Assigned to Norbert Runge
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21323

##### Commits with Issue ICU-21323

- 90631ab `ICU-21323 Automates BRS test task of build and run testmap.`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-03-05T11:01:42-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/90631ab80765d5beb51901d03b678931a5c32633

- 65c1b9e `ICU-21323 Automates BRS testing tasks of U_CHARSET_IS_UTF8 and`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-03-03T11:45:02-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/65c1b9e6904569cbe452ba74b5ebf6652f68f3ef

- 7356455 `ICU-21323 Adds BRS task 'test ICU4C without data' to GHA, triggered by`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-02-26T14:19:01-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/735645589ee4d89e27abf541fda8b58ad238166d

#### Issue ICU-21349

- ICU-21349: `Units improvements / performance / cleanup`
	- Assigned to Hugo van der Merwe
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21349

##### Commits with Issue ICU-21349

- 864682f `ICU-21349 Delete MeasureUnitImpl copy constructor, drop an indirection`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2021-03-09T20:04:57+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/864682f5dd1b86c5524d1709b6c39af73d52e010

- b1a685a `ICU-21349 calling .usage("") should unset the existing usage`
	- Authored by younies <younies@chromium.org>
	- Committed at 2021-03-06T00:37:06+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b1a685a67649152dd729c975c1ab3f09a5dfd33a

- c231cf7 `ICU-21349 ICU4J units cleanup: eclipse warnings, unsuppress one warning`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2021-03-02T18:54:22+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/c231cf7c4f5d408f03104fc858cf8bd3cf45124a

- 2138ac8 `ICU-21349 Add extra UnitsRouter constructor that takes only CLDR unit…`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2021-02-24T03:43:50+00:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2138ac8a0ea241b13bf2645ec8b8fa8178e9780c

- c825da1 `ICU-21349 Add extra UnitsConverter constructor that takes only CLDR unit identifiers`
	- Authored by Younies Mahmoud <younies@chromium.org>
	- Committed at 2021-02-24T02:06:43+00:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/c825da1d291cde0343600ad3d07c5df1dbad00f4

- 00cedad `ICU-21349 Add extra ComplexUnitsConverter constructor that takes only CLDR units Identifier`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2021-02-19T07:54:39+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/00cedadc92427612ec76eca4e7388d43295a2d8e

- 916b9fa `ICU-21349 Add UnitsConverter.getConversionInfo(...)`
	- Authored by younies <younies@chromium.org>
	- Committed at 2021-02-10T14:10:44+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/916b9fad755aee1f1d772e1d31160a4a5179c5b1

- 377dc22 `ICU-21349 Fix ICU4J reciprocal unit conversions`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2021-02-05T18:29:31-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/377dc22280677b12a4a255b309a2c9d05b4fb0a5

- 412ac38 `ICU-21349 Change UnitConverter name to UnitsConverter`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2021-02-03T14:50:04+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/412ac386f457c080e772cb5900561a6aa976f03d

- 01da273 `ICU-21349 Improve forIdentifier docs to exclude long_unit_identifier.`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2021-01-27T19:02:45+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/01da2732b7445661e026efba5b3ff512cce43dcc

- b594f4b `ICU-21349 Enhance Supporting Mixed Unit (such as "inch-and-foot")`
	- Authored by younies <younies@chromium.org>
	- Committed at 2021-01-20T17:50:36+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b594f4b2a981c68fab7051a1be609247cb76a33a

- 6562ac5 `ICU-21349 move testConverter from C++ to Java`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2021-01-20T11:48:41+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6562ac57df20da383db3d81c7f138830d6b84b8c

- 0895a22 `ICU-21349 Adjust C++ `MeasureUnitImpl::serialize` to be as same as the Java one`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2021-01-13T22:31:05+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/0895a223a35d491f997a8819005151afcdebafa6

- 9a28523 `ICU-21349 ensure parser behave the same and add import test cases to Java Code`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2020-12-04T04:36:22+04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/9a28523b6e78b35d17938d5710790345823899df

- 14c1c08 `ICU-21349 Add update instructions for unitConstants. Plus minor fixes.`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2020-12-03T12:48:01+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/14c1c0861ce106d8159a463e3d19e746044871ec

- 9c73048 `ICU-21349 Import 'Updating Measure Unit' sites page, improve formatting.`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2020-12-03T12:48:01+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/9c73048681607a41e34a975b7bf1d1aa5416287d

- c07264a `ICU-21349 Make appendSingleUnit behaviour in C++ comply with Java`
	- Authored by younies <younies@chromium.org>
	- Committed at 2020-12-01T01:42:17+04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/c07264a363dbdbaa28ecc15633ef05764b1d2afe

- 3d706fa `ICU-21349 fix comment for CLDR identifiers`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2020-11-25T19:36:08+04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/3d706fac426fe4b4ac5e84b21a8f3bcb4eb5953e

- f7ab1f7 `ICU-21349 Fix confusing names of exponent variables.`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2020-11-17T23:54:25+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f7ab1f7c5007e53993fc3b907ababf5b04ce22bc

- 50bd796 `ICU-21349 Remove a potential 0/0 (=NaN). Align C++ & Java better.`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2020-11-17T20:21:39+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/50bd7969c794f8c1999f55e5cb77aaff3f4fc4ac

- 909f343 `ICU-21349 Improve MeasureUnit comparators`
	- Authored by younies <younies@chromium.org>
	- Committed at 2020-11-13T23:36:00+04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/909f343cd6db8da64db3562d261dad85f7444430

- 5a75375 `ICU-21349 Refactor testComplexUnitsConverter`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2020-11-04T18:07:35+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/5a753752226851d2c2cb40ce443bc383e65459e4

- 21dde41 `ICU-21349 Some improvements to UnitsTest`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2020-10-27T14:23:08+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/21dde41f9e2c2b72ae7aea2018e1dcf05655934d

#### Issue ICU-21369

- ICU-21369: `Deprecate @provisional API doc tags`
	- Assigned to Yoshito Umaoka
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21369

##### Commits with Issue ICU-21369

- 6bfa5c0 `ICU-21369 Remove @provisional API doc tags in ICU4J`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2021-03-03T23:16:52-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6bfa5c02edd684f3411a4e26d7923189ef433e2f

#### Issue ICU-21372

- ICU-21372: `C APIs to icu::TimeZone getOffsetFromLocal`
	- Assigned to Yoshito Umaoka
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21372

##### Commits with Issue ICU-21372

- 53aa050 `ICU-21372 getOffsetFromLocal for C and C++`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2021-03-02T10:21:28-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/53aa0505c5f95a8cebbd7b4421d474fd2a790b80

#### Issue ICU-21388

- ICU-21388: `Changes to improve performance of String Search in ICU4C`
	- Assigned to Jeff Genovy
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21388

##### Commits with Issue ICU-21388

- 8f787b6 `ICU-21388 Remove test case that does nothing so that we can mark RuleBasedCollator as final.`
	- Authored by Jeff Genovy <29107334+jefgen@users.noreply.github.com>
	- Committed at 2020-12-04T15:47:40-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/8f787b6de9a7f964ada0c6988f2db899cb328a9b

#### Issue ICU-21416

- ICU-21416: `Fix typos for ICU 69`
	- Assigned to Erik Torres Aguilar
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21416

##### Commits with Issue ICU-21416

- f397c0a `ICU-21416 Update icu4c-readme.md`
	- Authored by abarberenaCPDS <43246964+abarberenaCPDS@users.noreply.github.com>
	- Committed at 2021-03-08T13:57:36-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f397c0af3d0be936e42e5229e7e4b2e4fb1ec372

- 00c1061 `ICU-21416 Fix markdown formatting in userguide/strings`
	- Authored by Patrick Reader <_@pxeger.com>
	- Committed at 2021-03-08T13:56:20-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/00c106179f2137115448e7b1a21c9717de78f14b

- fb715ea `ICU-21416 Fix typos and formatting errors in regexp.md`
	- Authored by Ken Harris <kengruven@gmail.com>
	- Committed at 2020-12-16T21:15:34-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/fb715eab4c4c2fab49cc3c6eb58cb3ccc7d16e4c

- bb5d29b `ICU-21416 Fix typos in comments`
	- Authored by inokawa <48897392+inokawa@users.noreply.github.com>
	- Committed at 2020-12-09T14:17:14-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/bb5d29b1436c6a5606b99554df6adf58cbc22f64

#### Issue ICU-21462

- ICU-21462: `ICULocaleService.java has a race condition`
	- Assigned to George Rhoten
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21462

##### Commits with Issue ICU-21462

- 747f5cd `ICU-21462 ICULocaleService.java has a race condition`
	- Authored by George Rhoten <grhoten@users.noreply.github.com>
	- Committed at 2021-01-22T11:05:08-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/747f5cd924959f2ec70ec85e92237a8b809faece

#### Issue ICU-21480

- ICU-21480: `ICU 69 RC BRS`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21480

##### Commits with Issue ICU-21480

- 2f89152 `ICU-21480 BRS#18 ICU4J promotions to stable`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2021-03-09T13:14:45-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2f8915283096b811f62e27e9d39a8f6b29c05f33

- b11ba74 `ICU-21480 brs 69rc, update urename.h pass 0`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-03-08T11:15:49-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b11ba74dd4077af492f236e21f57147d0e557833

- be039c5 `ICU-21480 Promoted all @draft ICU 67 APIs to @stable ICU 67.`
	- Authored by Rich Gillam <62772518+richgillam@users.noreply.github.com>
	- Committed at 2021-03-03T17:21:42-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/be039c59362f64e0bdd6323ff615437928d40b1d

- 1bf2aa2 `ICU-21480 BRS69RC update readmes for RC`
	- Authored by Erik Torres <erik.torres.aguilar@gmail.com>
	- Committed at 2021-03-03T12:41:20-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/1bf2aa2354d7026184074a951590004b6062e8e3

- 1fa3419 `ICU-21480 Update GitHub pull request template to prevent autolinking example ticket number.`
	- Authored by Jeff Genovy <29107334+jefgen@users.noreply.github.com>
	- Committed at 2021-03-02T17:17:21-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/1fa3419812b3bab42c80506311f8f4f843ee03b5

- 31182a9 `ICU-21480 integrate CLDR release-39-alpha4 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-02-25T10:19:57-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/31182a99b4ced2ea27228c07a840671fbe897ddb

- f23bd25 `ICU-21480 Update GitHub pull request template: JIRA issue number is needed on commit messages.`
	- Authored by Jeff Genovy <29107334+jefgen@users.noreply.github.com>
	- Committed at 2021-02-24T17:13:17-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f23bd25ef5d1878fdde34ce732866c45eea10f87

- 6e91c75 `ICU-21480 Update French unit-times pattern in unit tests`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2021-02-24T23:35:29+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6e91c7552eee0fa8fb760aa39f34984ff26f9f58

- e9bb3e4 `ICU-21480 integrate CLDR release-39-alpha3 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-02-24T10:45:42-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/e9bb3e440e318898b1e7eea5d4471921c80d982f

- cf83c5b `ICU-21480 integrate CLDR release-39-alpha2 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-02-19T10:53:23-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/cf83c5b3850a82c5ffbb6d892805205c941374c6

- 7159e33 `ICU-21480 integrate CLDR release 39 alpha1 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-02-16T21:44:12-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/7159e334ff12893b857de9a92e1c2eae4f3399fc

- 9c73e15 `ICU-21480 BRS69RC Version update and regenerate configure for v69`
	- Authored by Erik Torres Aguilar <ertorres@microsoft.com>
	- Committed at 2021-02-11T15:43:55-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/9c73e15d029189a70fb33e9488739397247a6d5b

- 3333fd5 `ICU-21480 integrate CLDR release 39 alpha0 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-02-10T11:58:26-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/3333fd557c398c98805f1ffdc63df796dc2bdcbd


## Total Problems: 15
