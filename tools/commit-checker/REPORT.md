<!---
Copyright (C) 2018 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->

Commit Report
=============

Environment:
- Latest Commit: 5f681ecbc75898a6484217b322f3883b6d1b2049
- Jira Query: project=ICU AND fixVersion=66.1
- Rev Range: release-65-1..upstream/maint/maint-66
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

*Success: No problems in this category!*

### Commits with Open Jira Issue
Tip: Consider closing the ticket if it is fixed.

#### Issue ICU-20693

- ICU-20693: `Replace ICU build tools in CLDR project with new package in ICU project`
	- Assigned to David Beaumont
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20693

##### Commits with Issue ICU-20693

- 74a2307 `ICU-20693 Final adjustments for handling forced parent IDs better.`
	- Authored by David Beaumont <dbeaumont@google.com>
	- Committed at 2019-11-07T11:38:20-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/74a2307a9a2084938710ec5c2582704d4d290236

- 841cd7f `ICU-20693 Adding support for deletion of existing files prior to ICU data generation.`
	- Authored by David Beaumont <dbeaumont@google.com>
	- Committed at 2019-11-06T23:47:52+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/841cd7fcccf88195b1cd6463d128f66b90dc8c6e

- 43826cc `ICU-20693 Reworking Ant structure to better explain and reflect 'tailorings'`
	- Authored by David Beaumont <dbeaumont@google.com>
	- Committed at 2019-11-06T23:09:05+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/43826cccba8487e9f60f99bceecb71a953dd8db0

- 6c41b4b `ICU-20693 Supporting dependency graph generation (first draft)`
	- Authored by David Beaumont <dbeaumont@google.com>
	- Committed at 2019-11-06T23:00:56+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6c41b4b24dc7f58bf5059a269285a0415a0067ac

- 4c74b34 `ICU-20693 Make alt-path processing per-locale and remove source values.`
	- Authored by David Beaumont <dbeaumont@google.com>
	- Committed at 2019-11-06T21:48:38+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/4c74b3456aeae6698095c3b36cd1be0a01eb52ea

- 16ab588 `ICU-20693 Quick tidy of some stale/broken comments`
	- Authored by David Beaumont <dbeaumont@google.com>
	- Committed at 2019-11-06T19:07:25+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/16ab588517ebbedf48beb4f65d834037de62b539

- ba7f1b6 `ICU-20693 Pseudo-locale "alt path" filtering support. (#869)`
	- Authored by David Beaumont <dbeaumont@google.com>
	- Committed at 2019-10-23T12:34:36+02:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/ba7f1b61ecf7a9c2867355847a1a71dd2fde4791

- 6ceb6ea `ICU-20693 No arbitrary ordering in path/value visitation for new API`
	- Authored by David Beaumont <dbeaumont@google.com>
	- Committed at 2019-09-26T07:26:45+02:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6ceb6ea8b5e482b0a149f0fed0405038aa52d4b9

- 7078e19 `ICU-20693 Refactoring for inferred IDs.`
	- Authored by David Beaumont <dbeaumont@google.com>
	- Committed at 2019-09-26T07:25:37+02:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/7078e19070f427679945bf501eed440334a5df1e

- 142c90a `ICU-20693 Remaining tests for new ICU tooling and some refactoring`
	- Authored by David Beaumont <dbeaumont@google.com>
	- Committed at 2019-09-25T23:37:05+02:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/142c90afcc2b1c36f98f2a24ac1f53dc4cb1ad70

- 791980c `ICU-20693 Unit tests for most conversion code and mappers.`
	- Authored by David Beaumont <dbeaumont@google.com>
	- Committed at 2019-09-24T19:53:41+02:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/791980cf416149fb779f4f687806f4c664b35194

#### Issue ICU-20965

- ICU-20965: `Azure DevOps to remove VS2015 build images, need to update the CI pipelines`
	- Assigned to Jeff Genovy
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20965

##### Commits with Issue ICU-20965

- 5f681ec `ICU-20965 Remove VS2015 from CI builds, no longer supported by Azure Pipelines`
	- Authored by Jeff Genovy <29107334+jefgen@users.noreply.github.com>
	- Committed at 2020-03-11T10:21:07-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/5f681ecbc75898a6484217b322f3883b6d1b2049

#### Issue ICU-20980

- ICU-20980: `ICU 66.1 Release BRS`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20980

##### Commits with Issue ICU-20980

- ad00aca `ICU-20980 integrate CLDR release-36-1 (final) to maint-66`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2020-03-05T13:25:35-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/ad00acac128120cda4b90854a158db195692c2e8

- 6119662 `ICU-20980 BRS66GA Update version numbers and README files`
	- Authored by Daniel Ju <daju@microsoft.com>
	- Committed at 2020-03-04T11:12:47-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6119662f03c4d99d4756e372cf4e7aa87031b848


## Total Problems: 3
