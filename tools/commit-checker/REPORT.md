<!---
Copyright (C) 2018 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->

Commit Report
=============

Environment:
- Latest Commit: 0e7b4428866f3133b4abba2d932ee3faa708db1d
- Jira Query: project=ICU AND fixVersion=69.1
- Rev Range: release-68-2..upstream/maint/maint-69
- Authenticated: Yes

## Problem Categories
### Closed Issues with No Commit
Tip: Tickets with type 'Task' or 'User Guide' or resolution 'Fixed by Other Ticket' are ignored.

*Success: No problems in this category!*
### Closed Issues with Illegal Resolution or Commit
Tip: Fixed tickets should have resolution 'Fixed by Other Ticket' or 'Fixed'.
Duplicate tickets should have their fixVersion tag removed.
Tickets with resolution 'Fixed by Other Ticket' are not allowed to have commits.

*Success: No problems in this category!*

### Commits without Jira Issue Tag
Tip: If you see your name here, make sure to label your commits correctly in the future.

*Success: No problems in this category!*

### Commits with Jira Issue Not Found
Tip: Check that these tickets have the correct fixVersion tag.

#### Issue ICU-21513

- ICU-21513: `ICU no longer compile on older macOS version with clang 11`
	- Assigned to Peter Edberg
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21513

##### Commits with Issue ICU-21513

- ff702ad `ICU-21513 check if TARGET_OS_SIMULATOR has been defined`
	- Authored by Mojca Miklavec <mojca.miklavec.lists@gmail.com>
	- Committed at 2021-04-07T13:47:42-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/ff702ad727d958426c222c45123085c5f943ab89

#### Issue ICU-21550

- ICU-21550: `Fix Locale canonicalization to add "zzzz" for sd/rg replacement if the replacement  is alpha{2}`
	- Assigned to Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21550

##### Commits with Issue ICU-21550

- b926f52 `ICU-21550 Add zzzz to subdivision if len==2`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2021-04-07T13:47:42-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b926f52688603fbcfb1df082b2711850b3127007


### Commits with Open Jira Issue
Tip: Consider closing the ticket if it is fixed.

#### Issue ICU-21513

- ICU-21513: `ICU no longer compile on older macOS version with clang 11`
	- Assigned to Peter Edberg
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21513

##### Commits with Issue ICU-21513

- ff702ad `ICU-21513 check if TARGET_OS_SIMULATOR has been defined`
	- Authored by Mojca Miklavec <mojca.miklavec.lists@gmail.com>
	- Committed at 2021-04-07T13:47:42-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/ff702ad727d958426c222c45123085c5f943ab89

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

#### Issue ICU-21550

- ICU-21550: `Fix Locale canonicalization to add "zzzz" for sd/rg replacement if the replacement  is alpha{2}`
	- Assigned to Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21550

##### Commits with Issue ICU-21550

- b926f52 `ICU-21550 Add zzzz to subdivision if len==2`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2021-04-07T13:47:42-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b926f52688603fbcfb1df082b2711850b3127007


## Total Problems: 5
