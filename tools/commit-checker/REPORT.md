<!---
Copyright (C) 2018 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->

Commit Report
=============

Environment:
- Latest Commit: a7e378d58788962bd520052cf92ae5cc63be5d8f
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

- e95840c `ICU-20857 Update version numbers to 66.0.1`
	- Authored by Daniel Ju <daju@microsoft.com>
	- Committed at 2019-10-21T12:32:39-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/e95840c59ca2b439c7f38f26370b58c26ad6d210

- f5b951d `ICU-20857 Update version numbers to 66.1`
	- Authored by Daniel Ju <daju@microsoft.com>
	- Committed at 2019-10-09T16:47:02-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f5b951d50530e1f586d9470b8cdd2302315c6b11

#### Issue ICU-20863

- ICU-20863: `[Memory] Reduce the default capacity or lazily initialize RegexPattern::fNamedCaptureMap because many regex patterns do not have named capturing`
	- Assigned to Andy Heninger
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20863

##### Commits with Issue ICU-20863

- 1206f07 `ICU-20863 Regex Named Capture map, add a missing nullptr check.`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2019-10-28T21:10:41-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/1206f07a5245fdc1ab4db234ecf320fbb0351f9d

- 0393734 `ICU-20863 Regex, lazy creation and reduced size of map from capture group names to numbers.`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2019-10-22T17:23:26-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/03937347fbe800c63af14aa4739a806697a53ed2

#### Issue ICU-20893

- ICU-20893: `Unicode 13`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20893

##### Commits with Issue ICU-20893

- a7e378d `ICU-20893 Unicode 13 beta`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2019-11-21T17:35:53-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/a7e378d58788962bd520052cf92ae5cc63be5d8f


## Total Problems: 5
