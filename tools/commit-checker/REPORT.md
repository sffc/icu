<!---
Copyright (C) 2018 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->

Commit Report
=============

Environment:
- Latest Commit: 152867f7ab2b87a5765d403160b914bae83659ec
- Jira Query: project=ICU AND fixVersion=69.1
- Rev Range: release-68-2..upstream/maint/maint-69
- Authenticated: Yes

## Problem Categories
### Closed Issues with No Commit
Tip: Tickets with type 'Task' or 'User Guide' or resolution 'Fixed by Other Ticket' are ignored.

- ICU-21552: `Get rid of "Encountered empty table" warnings in data build`
	- Assigned to Rich Gillam
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21552

- ICU-21117: `sane build system for Unicode data`
	- Assigned to Elango Cheran
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21117

### Closed Issues with Illegal Resolution or Commit
Tip: Fixed tickets should have resolution 'Fixed by Other Ticket' or 'Fixed'.
Duplicate tickets should have their fixVersion tag removed.
Tickets with resolution 'Fixed by Other Ticket' are not allowed to have commits.

- ICU-21552: `Get rid of "Encountered empty table" warnings in data build`
	- Assigned to Rich Gillam
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21552

- ICU-21117: `sane build system for Unicode data`
	- Assigned to Elango Cheran
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21117


### Commits without Jira Issue Tag
Tip: If you see your name here, make sure to label your commits correctly in the future.

*Success: No problems in this category!*

### Commits with Jira Issue Not Found
Tip: Check that these tickets have the correct fixVersion tag.

*Success: No problems in this category!*

### Commits with Open Jira Issue
Tip: Consider closing the ticket if it is fixed.

#### Issue ICU-21018

- ICU-21018: `500+ spelling errors in various source files`
	- Assigned to Erik Torres Aguilar
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

#### Issue ICU-21323

- ICU-21323: `Automate more BRS tasks`
	- Assigned to Norbert Runge
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21323

##### Commits with Issue ICU-21323

- 22dace7 `ICU-21323 Automates the uconfig variation BRS tasks. The test`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-03-11T16:25:33-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/22dace7f5f1901771eced75a00911be720ad602a

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

#### Issue ICU-21520

- ICU-21520: `Tracking bug for restoring and extending the ICU performance tests`
	- Assigned to Norbert Runge
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21520

##### Commits with Issue ICU-21520

- 3d7ba65 `ICU-21520 Fixes typo in name of test data file; removes a regex that`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-03-16T20:01:16-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/3d7ba6560ef59fad4ea0ed38a7a3ee57792daee3

#### Issue ICU-21546

- ICU-21546: `ICU 69 BRS`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21546

##### Commits with Issue ICU-21546

- c540669 `ICU-21546 Fix warnings from running the samples with MSVC.`
	- Authored by Jeff Genovy <29107334+jefgen@users.noreply.github.com>
	- Committed at 2021-04-05T13:59:43-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/c5406692bb4860e183889943be6560214e2a7be0

- 7afcbdb `ICU-21546 BRS69GA Update version numbers for 69GA`
	- Authored by Erik Torres <erik.torres.aguilar@gmail.com>
	- Committed at 2021-04-01T18:21:00-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/7afcbdb55176bd4f8116908ded957be19ae933ba

- 544d097 `ICU-21546 brs 69, add note about genren process`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-03-31T16:23:18-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/544d097fa36018bb48ce774464f438b34c482cf0

- e7db575 `ICU-21546 integrate CLDR release-39-beta2 to ICU maint-69, just affects cldr-icu pom`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-03-25T17:02:23-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/e7db5754ba2720c18248a2c66cb54ccba5a74296


## Total Problems: 9
