<!---
Copyright (C) 2018 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->

Commit Report
=============

Environment:
- Latest Commit: 7a5139ad95469def008b3a86eedd0e5768fa39bf
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

#### Issue ICU-20728

- ICU-20728: `Improve output from RBBI Monkey Test`
	- Assigned to Craig Cornelius
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20728

##### Commits with Issue ICU-20728

- 2baf0a7 `ICU-20728 Improve debug output for old C++ RBBI monkey test`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2019-10-10T13:26:03-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2baf0a75b0647e2f29143a7d5de8e95ce55afd38

#### Issue ICU-20857

- ICU-20857: `ICU 66 Preview BRS`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20857

##### Commits with Issue ICU-20857

- ffbc8cf `ICU-20857 update API Change Report for ICU 66preview`
	- Authored by Steven R. Loomis <srloomis@us.ibm.com>
	- Committed at 2019-12-03T17:11:37-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/ffbc8cf85f1379a1461b6928d40cfd6ae2464694

- 26ea0c2 `ICU-20857 BRS66 Updated ICU4J API change report (also regenerated`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2019-12-03T18:33:18-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/26ea0c22f2d7ef2c38befe05a157f1605c45095d

- db3fce9 `ICU-20857 BRS 66 Clean up import statement`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2019-12-03T17:33:11-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/db3fce9d5261123f4086b1be55007b09b4fbea77

- e2afc54 `ICU-20857 BRS66 update urename.h`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2019-12-03T08:53:23-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/e2afc5486dc73dc86710f13ec39446d90ffb2c73

- f3e2f4f `ICU-20857 Update Readme for ICU 66 Preview.`
	- Authored by Jeff Genovy <jefgen@microsoft.com>
	- Committed at 2019-12-02T15:13:15-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f3e2f4f02ee9579cfc7a6f7c86104e1e1ac04df6

- 04c8616 `ICU-20857 integrate CLDR release-36-1-preview to maint-66`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2019-11-22T19:01:36-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/04c8616f936b4dfaa6bf144eb39241f9c45f8ffb

- e95840c `ICU-20857 Update version numbers to 66.0.1`
	- Authored by Daniel Ju <daju@microsoft.com>
	- Committed at 2019-10-21T12:32:39-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/e95840c59ca2b439c7f38f26370b58c26ad6d210

- f5b951d `ICU-20857 Update version numbers to 66.1`
	- Authored by Daniel Ju <daju@microsoft.com>
	- Committed at 2019-10-09T16:47:02-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f5b951d50530e1f586d9470b8cdd2302315c6b11

#### Issue ICU-20893

- ICU-20893: `Unicode 13`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20893

##### Commits with Issue ICU-20893

- 197e023 `ICU-20893 Line break tailorings updated to Unicode 13.`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2019-11-26T15:25:06-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/197e0239ab5dd3b0da75eba7c390e4f3a035f5a0

- a7e378d `ICU-20893 Unicode 13 beta`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2019-11-21T17:35:53-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/a7e378d58788962bd520052cf92ae5cc63be5d8f

#### Issue ICU-20942

- ICU-20942: `ICU4J Builds failing due to old version of Apache Ivy using HTTP instead of HTTPS`
	- Assigned to Jeff Genovy
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20942

##### Commits with Issue ICU-20942

- b0f76ab `ICU-20942 Update Apache Ivy to 2.5.0 to fix failing ICU4J builds.`
	- Authored by Jeff Genovy <29107334+jefgen@users.noreply.github.com>
	- Committed at 2020-01-20T14:58:55+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b0f76abadae88086560aafff4fc972a4f16fce67


## Total Problems: 5
