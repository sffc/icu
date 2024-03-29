## Collected 3 commit(s) to exclude
<!--
Copyright (C) 2021 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->
Commit Report
=============

Environment:
- Now: 2024-03-29T15:47:40.119258
- Latest Commit: https://github.com/unicode-org/icu/commit/97335dfa7e323f41b46918bbf5cad95c5e521268
- Jira Query: `project=ICU AND fixVersion=75.1`
- Rev Range: `release-74-2..upstream/main`
- Authenticated: `Yes`

-----
-----
_(anything between the above two lines is an error)_

Total problem(s): 22

## Table Of Contents
Note: empty categories are omitted.
- [Closed Issues with No Commit](#closed-issues-with-no-commit) 4
- _Closed Issues with Commit Policy Problems_
- _Commits without Jira Issue Tag_
- [Commits with Jira Issue Not Found](#commits-with-jira-issue-not-found) 3
- [Commits with Open Jira Issue](#commits-with-open-jira-issue) 15
- _Issue is under Review_
- [Excluded Commits](#excluded-commits) 3

## Problem Categories
### Closed Issues with No Commit
[🔝Top](#table-of-contents)

_4 item(s)_
ICU Tip: If commits aren't expected, change the ticket type to 'Task' or 'User Guide' or set the resolution to one such as 'Fixed by other ticket' or 'Fix Non-repo'.
CLDR Tip: Change the ticket type or set the resolution to one such as 'Fixed by other ticket' or 'Fix Non-repo' if commits aren't expected.

- [ICU-22660](https://unicode-org.atlassian.net/browse/ICU-22660): `SHASUM512 information on 74.2 release is not correct`
	- _Closed Issues with No Commit_
	- Assigned to Craig Cornelius
	- Status: Done
	- Resolution: Fixed
	- Fix Version: 75.1
	- Component(s): team_processes_tools

- [ICU-22575](https://unicode-org.atlassian.net/browse/ICU-22575): `AvailableFormatsSink doesn't inherit patterns from root`
	- _Closed Issues with No Commit_
	- Assigned to Rich Gillam
	- Status: Done
	- Resolution: Fixed
	- Fix Version: 75.1
	- Fix Version: 74.2
	- Component(s): format_date
	 - **Note: Has excluded/cherry-picked commits. Fix Version may be wrong.**

- [ICU-22546](https://unicode-org.atlassian.net/browse/ICU-22546): `uloc_addLikelySubtags doc-comments don't match actual output`
	- _Closed Issues with No Commit_
	- Assigned to Frank Yung-Fong Tang
	- Status: Done
	- Resolution: Fixed
	- Fix Version: 75.1
	- Component(s): locale_id

- [ICU-22258](https://unicode-org.atlassian.net/browse/ICU-22258): `dangi round trip bug in 1988/2/17 and 1958/2/18`
	- _Closed Issues with No Commit_
	- Assigned to Frank Yung-Fong Tang
	- Status: Done
	- Resolution: Fixed
	- Fix Version: 75.1
	- Component(s): time_calc


### Commits with Jira Issue Not Found
[🔝Top](#table-of-contents)

_3 item(s)_
Tip: Check that these tickets have the correct fixVersion tag.

#### Issue ICU-21991

_issue was not found in `project=ICU AND fixVersion=75.1`_
- [ICU-21991](https://unicode-org.atlassian.net/browse/ICU-21991): `Add a CI build bot that uses VS2022`
	- Assigned to Rahul Pandey
	- Status: Done
	- Resolution: Fixed
	- Fix Version: 74.1
	- Component(s): build_c

##### Commits with Issue ICU-21991

- [bd9e5ed](https://github.com/unicode-org/icu/commit/bd9e5ed620edda29b9e00ca471c3cd4e2eef4e26) [ICU-21991](https://unicode-org.atlassian.net/browse/ICU-21991) `added VS2022 checks and changed windows SDK version`
	- Authored by Sarvesh Arora <sarvesharora@microsoft.com>
	- Committed at 2023-10-12T14:36:27+05:30

#### Issue ICU-22482

_issue was not found in `project=ICU AND fixVersion=75.1`_
- [ICU-22482](https://unicode-org.atlassian.net/browse/ICU-22482): `Hash-pin workflow GitHub Actions`
	- Assigned to Elango Cheran
	- Status: Accepted
	- Fix Version: _none_
	- Component(s): test_fmwk_util

##### Commits with Issue ICU-22482

- [80a01a4](https://github.com/unicode-org/icu/commit/80a01a475b3704b57adbf117b746c2981ef5e7f5) [ICU-22482](https://unicode-org.atlassian.net/browse/ICU-22482) `Hash-pin GHA, add dependabot to keep them updated`
	- Authored by Pedro Kaj Kjellerup Nacht <pnacht@google.com>
	- Committed at 2024-03-20T22:14:52-07:00

#### Issue ICU-22583

_issue was not found in `project=ICU AND fixVersion=75.1`_
- [ICU-22583](https://unicode-org.atlassian.net/browse/ICU-22583): `ICU 74.2 BRS`
	- Assigned to Markus Scherer
	- Status: Done
	- Resolution: Fixed
	- Fix Version: 74.2
	- Component(s): team_processes_tools

##### Commits with Issue ICU-22583

- [43ab3d1](https://github.com/unicode-org/icu/commit/43ab3d1de8a06f93bd07fa4b9d5168e1df440783) [ICU-22583](https://unicode-org.atlassian.net/browse/ICU-22583) `BRS 75rc CLDR 45-alpha0 to ICU main part 4 (fix to get new unitPrefixes data)`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2024-02-06T18:07:44-08:00

- [12cbf73](https://github.com/unicode-org/icu/commit/12cbf73e39081105931fef50428c3ba921bd3456) [ICU-22583](https://unicode-org.atlassian.net/browse/ICU-22583) `BRS 75rc CLDR 45-alpha0 to ICU main part 3 (source and test code changes)`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2024-02-06T18:07:44-08:00

- [c7245a3](https://github.com/unicode-org/icu/commit/c7245a36dfc3fb5e87524ec652fa3763d68272ab) [ICU-22583](https://unicode-org.atlassian.net/browse/ICU-22583) `BRS 75rc CLDR 45-alpha0 to ICU main part 2 (data generated or copied from CLDR)`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2024-02-06T18:07:44-08:00

- [b79ef68](https://github.com/unicode-org/icu/commit/b79ef68c324b492c61b68c54a0e29af97322ba64) [ICU-22583](https://unicode-org.atlassian.net/browse/ICU-22583) `BRS 75rc CLDR 45-alpha0 to ICU main part 1 (binary data, binary-like source data)`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2024-02-06T18:07:44-08:00


### Commits with Open Jira Issue
[🔝Top](#table-of-contents)

_15 item(s)_
Tip: Consider closing the ticket if it is fixed.

#### Open Issues by Component

 - **build_j**: [ICU-22605](#issue-icu-22605) [ICU-22675](#issue-icu-22675)
 - **format_message**: [ICU-22690](#issue-icu-22690) [ICU-22261](#issue-icu-22261)
 - **locale_id**: [ICU-22700](#issue-icu-22700)
 - **others**: [ICU-22532](#issue-icu-22532) [ICU-22533](#issue-icu-22533)
 - **team_processes_tools**: [ICU-22481](#issue-icu-22481) [ICU-22677](#issue-icu-22677) [ICU-22534](#issue-icu-22534)
 - **test_fmwk_util**: [ICU-22482](#issue-icu-22482)
 - **textbounds**: [ICU-22666](#issue-icu-22666) [ICU-22518](#issue-icu-22518)
 - **time_calc**: [ICU-22659](#issue-icu-22659) [ICU-22620](#issue-icu-22620)


#### Issue ICU-22261

_Jira issue is open_
- [ICU-22261](https://unicode-org.atlassian.net/browse/ICU-22261): `Implement MessageFormat v2 in libicu4c`
	- Assigned to Tim Chevalier
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): format_message

##### Commits with Issue ICU-22261

- [070a1f4](https://github.com/unicode-org/icu/commit/070a1f420bc68042ead85ab07a73212382f0fa05) [ICU-22261](https://unicode-org.atlassian.net/browse/ICU-22261) `Add missing API tags for MessageFormat 2 methods/constants`
	- Authored by Tim Chevalier <tjc@igalia.com>
	- Committed at 2024-03-28T15:46:32-07:00

- [aff1bba](https://github.com/unicode-org/icu/commit/aff1bbaa14c21fabe0182ac2e7cad6ffceb2e59d) [ICU-22261](https://unicode-org.atlassian.net/browse/ICU-22261) `Add UCONFIG_NO_MF2 flag that can be used to disable MessageFormat 2 functionality`
	- Authored by Tim Chevalier <tjc@igalia.com>
	- Committed at 2024-03-28T08:48:35-07:00

- [f7d641d](https://github.com/unicode-org/icu/commit/f7d641d5adb0460d1f58bad5947a29725870cc83) [ICU-22261](https://unicode-org.atlassian.net/browse/ICU-22261) `Add tech preview implementation for MessageFormat 2.0 to icu4c`
	- Authored by Tim Chevalier <tjc@igalia.com>
	- Committed at 2024-03-27T17:04:07-04:00

#### Issue ICU-22481

_Jira issue is open_
- [ICU-22481](https://unicode-org.atlassian.net/browse/ICU-22481): `gendict should support toml output`
	- Assigned to Manish मनीष Goregaokar
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-22481

- [74abcfe](https://github.com/unicode-org/icu/commit/74abcfe288b4b25b8255e65c9cafbe8f89319bf4) [ICU-22481](https://unicode-org.atlassian.net/browse/ICU-22481) `Add toml support to gendict`
	- Authored by Manish Goregaokar <manishsmail@gmail.com>
	- Committed at 2023-12-27T22:59:57-08:00

#### Issue ICU-22482

_Jira issue is open_
- [ICU-22482](https://unicode-org.atlassian.net/browse/ICU-22482): `Hash-pin workflow GitHub Actions`
	- Assigned to Elango Cheran
	- Status: Accepted
	- Fix Version: _none_
	- Component(s): test_fmwk_util

##### Commits with Issue ICU-22482

- [80a01a4](https://github.com/unicode-org/icu/commit/80a01a475b3704b57adbf117b746c2981ef5e7f5) [ICU-22482](https://unicode-org.atlassian.net/browse/ICU-22482) `Hash-pin GHA, add dependabot to keep them updated`
	- Authored by Pedro Kaj Kjellerup Nacht <pnacht@google.com>
	- Committed at 2024-03-20T22:14:52-07:00

#### Issue ICU-22518

_Jira issue is open_
- [ICU-22518](https://unicode-org.atlassian.net/browse/ICU-22518): `Add a way to export segmentation monkey tests in UCD format`
	- Assigned to Robin Leroy
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): textbounds

##### Commits with Issue ICU-22518

- [ba1208e](https://github.com/unicode-org/icu/commit/ba1208e49b10c808651cd40bc05e0138c5291194) [ICU-22518](https://unicode-org.atlassian.net/browse/ICU-22518) `Add a flag to export the output of the reference implementation from the old segmentation monkey tests`
	- Authored by Robin Leroy <egg.robin.leroy@gmail.com>
	- Committed at 2024-02-08T04:54:33+01:00

#### Issue ICU-22532

_Jira issue is open_
- [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532): `ICU 75 code warnings/version updates`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): others

##### Commits with Issue ICU-22532

- [94305fc](https://github.com/unicode-org/icu/commit/94305fc59bbd56ff46b54290a052767ffa964ac2) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Bump the github-actions group with 9 updates`
	- Authored by dependabot[bot] <49699333+dependabot[bot]@users.noreply.github.com>
	- Committed at 2024-03-21T09:45:50-07:00

- [104214a](https://github.com/unicode-org/icu/commit/104214aeae7c944070ff886eed787ac24287d334) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Use previous Ubuntu version for ICU4C in GH Actions CI for now`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-03-14T16:20:49-07:00

- [0d7cedc](https://github.com/unicode-org/icu/commit/0d7cedc0dd7cbe595ba415bbad226262a5358a3d) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Trigger CI workflows when workflow definitions change`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-02-28T12:50:43-05:00

- [c2b3282](https://github.com/unicode-org/icu/commit/c2b328267e2c92a7482775c3450bcfd9c3ba3d08) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Increase timeout for exhaustive ICU4J tests`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-02-27T10:58:18-08:00

- [3df505b](https://github.com/unicode-org/icu/commit/3df505b5116218a7a4be976ba6bd8f802d84a7ff) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Increase Github Actions CI parallelism from 2 to 4`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-02-27T10:58:09-08:00

- [314f03e](https://github.com/unicode-org/icu/commit/314f03eeaf7473bf86a29ece677050709138ca22) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Don't dereference nullptr (-Wtautological-undefined-compare).`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-02-27T14:11:38+01:00

- [fd5d6c9](https://github.com/unicode-org/icu/commit/fd5d6c97b1d0cff4a07db3c7e7ab04b20099e124) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Improve commit checker instructions`
	- Authored by Shane F. Carr <shane@unicode.org>
	- Committed at 2024-02-23T16:38:14-06:00

- [e81b872](https://github.com/unicode-org/icu/commit/e81b8727aaafa306858565c0e4116703c4893459) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Move the definition of _POSIX_C_SOURCE to the Makefile.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-01-23T13:00:54+09:00

- [a837e0d](https://github.com/unicode-org/icu/commit/a837e0d3991e05db61dfbd35ee985976109092d5) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Set a value for _POSIX_C_SOURCE to get symlink() declared.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-01-11T17:35:28+09:00

- [539e8f4](https://github.com/unicode-org/icu/commit/539e8f41a35fec30fba4cfb3a65ea4db67978f85) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Compiler warning: conversion from 'double' to 'int32_t'.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-01-04T09:40:40+09:00

- [1384d9f](https://github.com/unicode-org/icu/commit/1384d9f3959470974470267eab722614b71e02d8) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Remove redundant 'void' from empty C++ parameter lists.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2023-12-19T09:27:18+09:00

#### Issue ICU-22533

_Jira issue is open_
- [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533): `ICU 75 docs minor fixes`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): others

##### Commits with Issue ICU-22533

- [6eb43b1](https://github.com/unicode-org/icu/commit/6eb43b164806efdbe0d55fc0db9c60a8cbcb971f) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `Update badges for CI pipelines, user guide docs about CI`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-03-22T12:18:47+05:30

- [18c7d48](https://github.com/unicode-org/icu/commit/18c7d48b3e527ccead8ba93abd6059dfe1329258) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `Add docs on Continuous Integration`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-03-12T09:14:24-07:00

- [90b2eed](https://github.com/unicode-org/icu/commit/90b2eed71aa31ff5d4859502f92922f419d5b510) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `compact norm16 tables`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-02-14T14:49:43-08:00

- [164a56b](https://github.com/unicode-org/icu/commit/164a56b73613159111d32dbb8497c6f5e96fa5cf) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `move custom normalization page from Sites to GitHub`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-02-14T09:35:14-08:00

- [400d97e](https://github.com/unicode-org/icu/commit/400d97e7d206ffae77c294faeb9e2aa3850c6c23) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `Update Maven CLI instructions for multi-module ICU4J`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-01-23T13:59:56-08:00

- [511e5ef](https://github.com/unicode-org/icu/commit/511e5efe562667dfe3f57c8d4cd8eb3af5b2137b) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `Update BRS instructions for tagging release`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2023-11-10T15:33:31-08:00

- [091fcf6](https://github.com/unicode-org/icu/commit/091fcf6f82d3e2a3b956637bc44bd6c5650e8b85) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `Don't mention 'Release Candidate' in javadoc`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2023-11-09T16:09:55-08:00

#### Issue ICU-22534

_Jira issue is open_
- [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534): `ICU 75rc BRS`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 74.1
	- Fix Version: 75.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-22534

- [97335df](https://github.com/unicode-org/icu/commit/97335dfa7e323f41b46918bbf5cad95c5e521268) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `add mf2 to docmain.h`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2024-03-28T17:18:48-07:00

- [1ac14c4](https://github.com/unicode-org/icu/commit/1ac14c4ea71ad462988acc530adfb38ac1f9a190) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `ICU4C API change report update`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2024-03-28T16:27:46-07:00

- [b2539f4](https://github.com/unicode-org/icu/commit/b2539f44df8f89f51401b903168a48a1aa9d972d) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `BRS75 Remove fixed logKnownIssue`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-03-28T16:11:34-07:00

- [0127e4f](https://github.com/unicode-org/icu/commit/0127e4f7607873c1f58533c56907c905e4e34ec7) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `BRS75 Remove fixed logKnownIssue for CLDR-17024`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-03-28T16:11:27-07:00

- [cce642a](https://github.com/unicode-org/icu/commit/cce642a84fd8b812cec97626c4d8675f2c3b268b) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `Regenerate urename.h for the ICU 75 release candidate.`
	- Authored by Rich Gillam <richard_gillam@apple.com>
	- Committed at 2024-03-28T08:39:08-07:00

- [57fc309](https://github.com/unicode-org/icu/commit/57fc3094f9658a283ed0b6d2648c0bb8a75f3f91) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `BRS75 J Serialization test data`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2024-03-26T08:51:38-04:00

- [6ad2ffb](https://github.com/unicode-org/icu/commit/6ad2ffb9dbef10ca1044632dc478dfd10877d085) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `BRS75 J API Signature file and API change report`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2024-03-26T08:51:16-04:00

- [4f75c62](https://github.com/unicode-org/icu/commit/4f75c627675b426938f569003ee9dc0ea43490bb) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `BRS75 clean up import statements`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2024-03-26T08:50:56-04:00

- [8ba1919](https://github.com/unicode-org/icu/commit/8ba19195f9483df3b1b2330e52d0dd7dd4f2c067) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `Update version number to 75.1`
	- Authored by Rahul Pandey <rp9.next@gmail.com>
	- Committed at 2024-03-26T07:02:45+05:30

- [4f2cefb](https://github.com/unicode-org/icu/commit/4f2cefb7ca6968308f70b83c82650475082e313c) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `Integrate CLDR 45 release beta1`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-03-18T20:49:00-07:00

- [b396885](https://github.com/unicode-org/icu/commit/b396885aae1f515df35688ea72943583c0268836) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `Integrate CLDR 45 release alpha 3, part 4, update supplementalData to rollback root changes`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-03-14T08:30:09-07:00

- [1b2d28b](https://github.com/unicode-org/icu/commit/1b2d28b042f9dd0671749abaf40a311582b33279) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `Integrate CLDR 45 release alpha 3, part 3, source files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-03-14T08:30:09-07:00

- [fc18bcb](https://github.com/unicode-org/icu/commit/fc18bcb05fd64d2506142a7fa4d95dcb463f0e6d) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `Integrate CLDR 45 release alpha 3, part 2, data files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-03-14T08:30:09-07:00

- [0906aae](https://github.com/unicode-org/icu/commit/0906aae169059af626c9dbac2e1aeab428d23b22) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `Integrate CLDR 45 release alpha 3, part 1, binary files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-03-14T08:30:09-07:00

- [1cedbbd](https://github.com/unicode-org/icu/commit/1cedbbd90d7dc1aa11576991dd7c169138d6b236) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `Fixed a couple issues from the API-promotions PR that Frank found in code review.`
	- Authored by Rich Gillam <richard_gillam@apple.com>
	- Committed at 2024-03-12T16:47:57-07:00

- [4c664b2](https://github.com/unicode-org/icu/commit/4c664b2180fc0d8b597f59a6747a7665a118d833) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `Changed ExternalBreakEngine so that it's surrounded by U_HIDE_INTERNAL_API instead of U_HIDE_DRAFT_API.`
	- Authored by Rich Gillam <richard_gillam@apple.com>
	- Committed at 2024-03-08T17:49:33-08:00

- [ebaf3e9](https://github.com/unicode-org/icu/commit/ebaf3e9f7584103f39bb74219b048d1d98ec40ef) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `BRS#19 Update ICU4C API Change Report (frontloading)`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2024-03-07T14:37:06-08:00

- [89cf563](https://github.com/unicode-org/icu/commit/89cf56333f3361470e4250e594c16c96b9634549) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `BRS#27 fix CI-Exhaustive-Main breakage for locale qaa`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2024-03-07T13:47:49+01:00

- [7bc202a](https://github.com/unicode-org/icu/commit/7bc202ae87394fd12879439bde0d5dacc4409f46) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `BRS#27 scrub closed issues (frontload)`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2024-03-05T11:15:28-08:00

- [c610d7f](https://github.com/unicode-org/icu/commit/c610d7f986d9f2ccd0084adef4ed4a6cd09ccbd1) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `Promote (almost) all @draft ICU 73 APIs to @stable ICU 73`
	- Authored by Rich Gillam <richard_gillam@apple.com>
	- Committed at 2024-03-04T18:05:29-08:00

- [96fb7ae](https://github.com/unicode-org/icu/commit/96fb7ae73a78aec7e1a5f3a51e830fa44e0d12df) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `ICU4J 75 frontload API change report`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2024-02-29T08:49:43-08:00

- [09ccfb9](https://github.com/unicode-org/icu/commit/09ccfb99566673e8dd731d723e6987ee704a123c) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `ICU4J 75 frontload: API status update`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2024-02-28T11:38:41-08:00

- [a1925ab](https://github.com/unicode-org/icu/commit/a1925abf4f070541d7fb795acdc5be0e7cae6211) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `CLDR 45 alpha2 integration to ICU`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-02-28T08:28:08-08:00

- [665d9db](https://github.com/unicode-org/icu/commit/665d9dbbe993b89c074c3463500237f8c99a4ac3) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `BRS 75 front-load update version to 75.0.1`
	- Authored by Rahul Pandey <rp9.next@gmail.com>
	- Committed at 2023-12-08T14:32:40-08:00

- [049c8ad](https://github.com/unicode-org/icu/commit/049c8ad36518d75bfefa63f3647cfee8b35c5ac0) [ICU-22534](https://unicode-org.atlassian.net/browse/ICU-22534) `Script preparing the GitHub icu4j release files`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2023-10-06T16:49:26-07:00

#### Issue ICU-22605

_Jira issue is open_
- [ICU-22605](https://unicode-org.atlassian.net/browse/ICU-22605): `The -sources.jar files in the 74.1 and 74.2 releases are (a lot) bigger than before`
	- Assigned to Mihai Nita
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): build_j

##### Commits with Issue ICU-22605

- [e76094c](https://github.com/unicode-org/icu/commit/e76094c55a0fe4bc6f5307102698e0fc632bf89d) [ICU-22605](https://unicode-org.atlassian.net/browse/ICU-22605) `Exclude the data files from the -sources.jar`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2023-12-15T09:08:22-08:00

#### Issue ICU-22620

_Jira issue is open_
- [ICU-22620](https://unicode-org.atlassian.net/browse/ICU-22620): `IANA TZ Database 2023d updates in ICU`
	- Assigned to Yoshito Umaoka
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): time_calc

##### Commits with Issue ICU-22620

- [dc7014f](https://github.com/unicode-org/icu/commit/dc7014fda6d6f08b3ddf468bddd62548c8c6263f) [ICU-22620](https://unicode-org.atlassian.net/browse/ICU-22620) `tz2023d updates`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2024-01-11T11:41:23-05:00

#### Issue ICU-22659

_Jira issue is open_
- [ICU-22659](https://unicode-org.atlassian.net/browse/ICU-22659): `tzdata 2024a updates`
	- Assigned to Yoshito Umaoka
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): time_calc

##### Commits with Issue ICU-22659

- [cd251ee](https://github.com/unicode-org/icu/commit/cd251ee62e08dd634162a269c54374be99b51c86) [ICU-22659](https://unicode-org.atlassian.net/browse/ICU-22659) `tzdata2024a updates in ICU repo`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2024-02-08T15:00:39-05:00

#### Issue ICU-22666

_Jira issue is open_
- [ICU-22666](https://unicode-org.atlassian.net/browse/ICU-22666): `Update ML model to improve Japanese phrase breaking quality`
	- Assigned to Shuhei Iitsuka
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): textbounds

##### Commits with Issue ICU-22666

- [37ecee3](https://github.com/unicode-org/icu/commit/37ecee3a0c80bb10108e7e6d4a91989756384a67) [ICU-22666](https://unicode-org.atlassian.net/browse/ICU-22666) `Update ML model to improve Japanese phrase breaking quality`
	- Authored by Shuhei Iitsuka <tushuhei@gmail.com>
	- Committed at 2024-03-11T12:00:03-07:00

#### Issue ICU-22675

_Jira issue is open_
- [ICU-22675](https://unicode-org.atlassian.net/browse/ICU-22675): `Migrate from deprecated boxed primitive constructors to their replacements`
	- Assigned to Mihai Nita
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): build_j

##### Commits with Issue ICU-22675

- [201af46](https://github.com/unicode-org/icu/commit/201af462fc1f939f569c70e748f63bb36dd4b2a4) [ICU-22675](https://unicode-org.atlassian.net/browse/ICU-22675) `Migrate from deprecated boxed primitive constructors to their replacements`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2024-02-26T16:39:05-08:00

#### Issue ICU-22677

_Jira issue is open_
- [ICU-22677](https://unicode-org.atlassian.net/browse/ICU-22677): `licensing updates (spdx, README, LICENSE, CONTRIBUTING)`
	- Assigned to Steven R. Loomis
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-22677

- [ea1c6da](https://github.com/unicode-org/icu/commit/ea1c6da07fa345dd485408caee51703bc95c0454) [ICU-22677](https://unicode-org.atlassian.net/browse/ICU-22677) `update LICENSE and README.md and pom.xml`
	- Authored by Steven R. Loomis <srl295@gmail.com>
	- Committed at 2024-02-26T14:34:59-06:00

- [6d15faa](https://github.com/unicode-org/icu/commit/6d15faab4806df96e6cba4a6bb0e9a2e67b4c630) [ICU-22677](https://unicode-org.atlassian.net/browse/ICU-22677) `update CONTRIBUTING.md`
	- Authored by Steven R. Loomis <srl295@gmail.com>
	- Committed at 2024-02-26T11:44:35-06:00

#### Issue ICU-22690

_Jira issue is open_
- [ICU-22690](https://unicode-org.atlassian.net/browse/ICU-22690): `Update the ICU4J implementation of MessageFormatter (MFv2) to the latest spec, LDML 45`
	- Assigned to Mihai Nita
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): format_message

##### Commits with Issue ICU-22690

- [141e820](https://github.com/unicode-org/icu/commit/141e820f7134b67818a76a8050671e8eea42eeb2) [ICU-22690](https://unicode-org.atlassian.net/browse/ICU-22690) `Update ICU4J MessageFormatter to the latest spec, LDML 45`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2024-03-22T14:39:02-07:00

#### Issue ICU-22700

_Jira issue is open_
- [ICU-22700](https://unicode-org.atlassian.net/browse/ICU-22700): `Locale name with "." and a very long tag caused very slow run time in DateFormat::create`
	- No assignee!
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): locale_id

##### Commits with Issue ICU-22700

- [d259da8](https://github.com/unicode-org/icu/commit/d259da81183bd2439e19dcb17cccf57cc31cf46c) [ICU-22700](https://unicode-org.atlassian.net/browse/ICU-22700) `Fix large POSIX charset name cause hang`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-03-21T11:33:52-07:00


### Excluded Commits
[🔝Top](#table-of-contents)

_3 item(s)_
These commits are not considered as part of current version tickets.

- [a7c7d8f](https://github.com/unicode-org/icu/commit/a7c7d8f214926ef23d2b54500ab77d95e5ea0068) [ICU-22561](https://unicode-org.atlassian.net/browse/ICU-22561) `Added maven-gpg-plugin in pom.xml to sign artifacts for maven central release.`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2023-10-30T19:51:44-07:00
	- NOTE: excluded due to already being merged to old maint
- [bcae6f2](https://github.com/unicode-org/icu/commit/bcae6f2a437f3e58eb5afb8568f88b286a389e37) [ICU-22575](https://unicode-org.atlassian.net/browse/ICU-22575) `Change AvailableFormatsSink to allow locales to inherit availableFormats items from the root locale.`
	- Authored by Rich Gillam <richard_gillam@apple.com>
	- Committed at 2023-12-04T12:47:50-08:00
	- NOTE: excluded due to already being merged to old maint
- [da83309](https://github.com/unicode-org/icu/commit/da83309900e90509d6d559e4ad5f9a2a0a1cef6b) [ICU-22595](https://unicode-org.atlassian.net/browse/ICU-22595) `GitHub release file generation script to include javadoc for each artifact in addition to full javadoc`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2023-12-07T10:37:15-08:00
	- NOTE: excluded due to already being merged to old maint

