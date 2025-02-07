## Collected 0 commit(s) to exclude
<!--
Copyright (C) 2021 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->
Commit Report
=============

Environment:
- Now: 2025-02-07T10:59:04.396970
- Latest Commit: https://github.com/unicode-org/icu/commit/697f7c0e0073f0424f83259bae184e5b56b2a792
- Jira Query: `project=ICU AND fixVersion=77.1`
- Rev Range: `release-76-1..upstream/main`
- Authenticated: `Yes`

-----
-----
_(anything between the above two lines is an error)_

Total problem(s): 19

## Table Of Contents
Note: empty categories are omitted.
- [Closed Issues with No Commit](#closed-issues-with-no-commit) 3
- _Closed Issues with Commit Policy Problems_
- _Commits without Jira Issue Tag_
- _Commits with Jira Issue Not Found_
- [Commits with Open Jira Issue](#commits-with-open-jira-issue) 16
- _Issue is under Review_
- _Excluded Commits_

## Problem Categories
### Closed Issues with No Commit
[🔝Top](#table-of-contents)

_3 item(s)_
ICU Tip: If commits aren't expected, change the ticket type to 'Task' or 'User Guide' or set the resolution to one such as 'Fixed by other ticket' or 'Fix Non-repo'.
CLDR Tip: Change the ticket type or set the resolution to one such as 'Fixed by other ticket' or 'Fix Non-repo' if commits aren't expected.

- [ICU-23041](https://unicode-org.atlassian.net/browse/ICU-23041): `Hard-code the citations from javadoc to eliminate the need for JCite`
	- _Closed Issues with No Commit_
	- Assigned to Mihai Nita
	- Status: Done
	- Resolution: Fixed
	- Fix Version: 77.1
	- Component(s): others

- [ICU-22980](https://unicode-org.atlassian.net/browse/ICU-22980): `make char16ptr.h & localpointer.h header-only compatible`
	- _Closed Issues with No Commit_
	- Assigned to Markus Scherer
	- Status: Done
	- Resolution: Won't Fix [deprecated]
	- Fix Version: 77.1
	- Component(s): others

- [ICU-22185](https://unicode-org.atlassian.net/browse/ICU-22185): `Add VSCode instructions for ICU4J`
	- _Closed Issues with No Commit_
	- Assigned to Elango Cheran
	- Status: Done
	- Resolution: Fixed
	- Fix Version: 77.1
	- Component(s): build_j


### Commits with Open Jira Issue
[🔝Top](#table-of-contents)

_16 item(s)_
Tip: Consider closing the ticket if it is fixed.

#### Open Issues by Component

 - **build_c**: [ICU-22977](#issue-icu-22977) [ICU-22954](#issue-icu-22954)
 - **format_date**: [ICU-22991](#issue-icu-22991)
 - **icuapps**: [ICU-22968](#issue-icu-22968)
 - **locale_id**: [ICU-22901](#issue-icu-22901)
 - **others**: [ICU-22921](#issue-icu-22921) [ICU-22920](#issue-icu-22920)
 - **properties**: [ICU-23033](#issue-icu-23033)
 - **team_processes_tools**: [ICU-22922](#issue-icu-22922)
 - **test_fmwk_util**: [ICU-22927](#issue-icu-22927) [ICU-22929](#issue-icu-22929)
 - **textbounds**: [ICU-22986](#issue-icu-22986) [ICU-22934](#issue-icu-22934)
 - **time_calc**: [ICU-22962](#issue-icu-22962)
 - **units**: [ICU-22781](#issue-icu-22781) [ICU-23032](#issue-icu-23032)


#### Issue ICU-22781

_Jira issue is open_
- [ICU-22781](https://unicode-org.atlassian.net/browse/ICU-22781): `Add concentr/perbillion structure`
	- Assigned to Younies Mahmoud
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): units

##### Commits with Issue ICU-22781

- [697f7c0](https://github.com/unicode-org/icu/commit/697f7c0e0073f0424f83259bae184e5b56b2a792) [ICU-22781](https://unicode-org.atlassian.net/browse/ICU-22781) `Fix &Improve MeasureUnit identifier generation for constant denominators (C++)`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2025-02-06T12:06:58+01:00

- [bc7ccb0](https://github.com/unicode-org/icu/commit/bc7ccb0589f952d45ad9c853af3d1d10780a34ab) [ICU-22781](https://unicode-org.atlassian.net/browse/ICU-22781) `Fix &Improve MeasureUnit identifier generation for constant denominators (Java)`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2025-02-04T00:59:13+01:00

- [d70b252](https://github.com/unicode-org/icu/commit/d70b252cdc3c5df088ff8e44bc29e95ae28be570) [ICU-22781](https://unicode-org.atlassian.net/browse/ICU-22781) `Add support for converting units with constant denominators (C++)`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2025-01-25T01:45:49+01:00

- [4df4eb4](https://github.com/unicode-org/icu/commit/4df4eb419b81ecedfb55f65dfdc23953cc083a4d) [ICU-22781](https://unicode-org.atlassian.net/browse/ICU-22781) `Add support for constant denominators in unit conversion`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2025-01-25T00:54:37+01:00

- [ba4d4d3](https://github.com/unicode-org/icu/commit/ba4d4d3ac27f3d2e40f5b6a2a51ec93f8661fff2) [ICU-22781](https://unicode-org.atlassian.net/browse/ICU-22781) `Adding support for constant denominators (C++)`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2025-01-24T02:06:43+01:00

- [242bf96](https://github.com/unicode-org/icu/commit/242bf9655f8ba3edc3ebb134a6e92bdf0771c122) [ICU-22781](https://unicode-org.atlassian.net/browse/ICU-22781) `Add a test case for unit constant behaviour`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2025-01-24T01:34:43+01:00

- [0369192](https://github.com/unicode-org/icu/commit/036919214c207c72b10df58382e7d04dd5759892) [ICU-22781](https://unicode-org.atlassian.net/browse/ICU-22781) `Fix and Add unit tests for withConstantDenominator in MeasureUnit`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2025-01-24T01:30:21+01:00

- [373cbaf](https://github.com/unicode-org/icu/commit/373cbaf3b2d3916d2e3df4f4ca796f00ed417220) [ICU-22781](https://unicode-org.atlassian.net/browse/ICU-22781) `Adding support for constant denominators`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2025-01-23T00:52:04+01:00

#### Issue ICU-22901

_Jira issue is open_
- [ICU-22901](https://unicode-org.atlassian.net/browse/ICU-22901): `Improve memory management in the locale code (ICU 77)`
	- Assigned to Fredrik Roubert
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): locale_id

##### Commits with Issue ICU-22901

- [424d6a3](https://github.com/unicode-org/icu/commit/424d6a3e8b993cb2a3d4450bb2449b4057726251) [ICU-22901](https://unicode-org.atlassian.net/browse/ICU-22901) `Update ulocimp_getSubtags() &co. to use std::string_view.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-11-22T19:05:03+01:00

- [1dccc10](https://github.com/unicode-org/icu/commit/1dccc100852673c7d3b41542d2130b3871b5c6cf) [ICU-22901](https://unicode-org.atlassian.net/browse/ICU-22901) `Move calls to uloc_getDefault() out of ulocimp_getSubtags().`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-11-22T19:05:03+01:00

#### Issue ICU-22920

_Jira issue is open_
- [ICU-22920](https://unicode-org.atlassian.net/browse/ICU-22920): `ICU 77 code warnings/version updates`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): others

##### Commits with Issue ICU-22920

- [fb64693](https://github.com/unicode-org/icu/commit/fb64693c281b97b2c7ce9619fda32f03a9e18235) [ICU-22920](https://unicode-org.atlassian.net/browse/ICU-22920) `Avoid "return by const value" antipattern`
	- Authored by Arthur O'Dwyer <arthur.j.odwyer@gmail.com>
	- Committed at 2025-01-30T10:58:25-08:00

- [ba012a7](https://github.com/unicode-org/icu/commit/ba012a74a11405a502b6890e710bfb58cef7a2c7) [ICU-22920](https://unicode-org.atlassian.net/browse/ICU-22920) `Fix raw type warnings in icu4j tests: charset, common_tests, translit`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2024-12-17T16:14:38-08:00

- [4ff5d6a](https://github.com/unicode-org/icu/commit/4ff5d6a0703f733eb34b329a443e221858c230bb) [ICU-22920](https://unicode-org.atlassian.net/browse/ICU-22920) `Fix raw type warnings in icu4j core tests`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2024-12-15T01:18:47-08:00

- [e38ac30](https://github.com/unicode-org/icu/commit/e38ac306bc139b9e64eea8bbbc83899876be620f) [ICU-22920](https://unicode-org.atlassian.net/browse/ICU-22920) `fix exhaustive tests for likely subtags failure ICU-22976`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2024-11-21T14:47:56-08:00

- [842899d](https://github.com/unicode-org/icu/commit/842899d81ae464700aa8413117131fc225710946) [ICU-22920](https://unicode-org.atlassian.net/browse/ICU-22920) `Only run Maven cache workflow on the upstream repo`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-11-05T15:16:00-08:00

#### Issue ICU-22921

_Jira issue is open_
- [ICU-22921](https://unicode-org.atlassian.net/browse/ICU-22921): `ICU 77 docs minor fixes`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): others

##### Commits with Issue ICU-22921

- [16e50b2](https://github.com/unicode-org/icu/commit/16e50b260f25847ecefc48ac4d9a4537b2c130ac) [ICU-22921](https://unicode-org.atlassian.net/browse/ICU-22921) `Fix broken link in userguide`
	- Authored by Taichi Haradaguchi <20001722@protonmail.com>
	- Committed at 2025-01-24T15:11:34-08:00

- [2c5e021](https://github.com/unicode-org/icu/commit/2c5e021f6d33bb5d3c091a4abf61ab5ccf15f93b) [ICU-22921](https://unicode-org.atlassian.net/browse/ICU-22921) `Add howto guide to try MF 2.0 final candidate draft impls`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2025-01-15T14:22:57-08:00

- [ba5cf31](https://github.com/unicode-org/icu/commit/ba5cf31f770058ad1d3a3502de7a084a2cfd0862) [ICU-22921](https://unicode-org.atlassian.net/browse/ICU-22921) `Add windows script doing jar extraction`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2025-01-08T13:54:42-08:00

- [d9d09db](https://github.com/unicode-org/icu/commit/d9d09db2a7167eea2b5749836ef32cdd45303fdd) [ICU-22921](https://unicode-org.atlassian.net/browse/ICU-22921) `remove redundant PR checklist item`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-12-26T11:07:30-08:00

- [0295105](https://github.com/unicode-org/icu/commit/02951053b45f270c04ffeac6e0787dd2313bbd23) [ICU-22921](https://unicode-org.atlassian.net/browse/ICU-22921) `Document a way to remove unused includes from command line`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2024-12-12T12:22:31-08:00

- [791a052](https://github.com/unicode-org/icu/commit/791a052f8ef96805674d2558dcbc8f749f98dc71) [ICU-22921](https://unicode-org.atlassian.net/browse/ICU-22921) `fix link from gitdev to ci exhaustive tests`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-12-09T09:55:54-08:00

- [2ba362f](https://github.com/unicode-org/icu/commit/2ba362fa3b7cb8b4f4c35b016ec1c490e590b86a) [ICU-22921](https://unicode-org.atlassian.net/browse/ICU-22921) `Update PR template`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-11-22T14:06:21-08:00

- [cd9fada](https://github.com/unicode-org/icu/commit/cd9fada30ceb3ee7c69718b938ffebb5e2e76a6b) [ICU-22921](https://unicode-org.atlassian.net/browse/ICU-22921) `PR template: move standing issues up to TODO section`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-11-22T10:00:06-08:00

- [ee8a94e](https://github.com/unicode-org/icu/commit/ee8a94e0f1de498eb196434887dc05d8c23af211) [ICU-22921](https://unicode-org.atlassian.net/browse/ICU-22921) `Rename README.md in .github`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2024-10-17T12:44:32-07:00

#### Issue ICU-22922

_Jira issue is open_
- [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922): `ICU 77rc BRS`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-22922

- [f9ee689](https://github.com/unicode-org/icu/commit/f9ee689d7a0ffda54dd8ed1f45e76204983b02d7) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Promoted all @draft ICU 75 APIs to @stable ICU 75.`
	- Authored by Rich Gillam <richard_gillam@apple.com>
	- Committed at 2025-02-05T13:02:56-08:00

- [0ceea4b](https://github.com/unicode-org/icu/commit/0ceea4bee93f45f859e90609314aff414431b5b7) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Integrate CLDR 47 release alpha2, part 3, data files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2025-02-03T09:31:43-08:00

- [c6e1c09](https://github.com/unicode-org/icu/commit/c6e1c09dbdce32be0c08eb8e30e9d392987ed3a6) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Integrate CLDR 47 release alpha2, part 2, locale fallback binary files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2025-02-03T09:31:43-08:00

- [9cbc8d7](https://github.com/unicode-org/icu/commit/9cbc8d7fe4d2ba0a357820c918c3c737bdeea5be) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Integrate CLDR 47 release alpha2, part 1, binary files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2025-02-03T09:31:43-08:00

- [95afc45](https://github.com/unicode-org/icu/commit/95afc45afa3f1e9419ba134437698e1f11927f5a) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Integrate CLDR 47 release alpha1, part 5, updated unit test, again`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2025-01-30T13:45:15-08:00

- [4e1d9b3](https://github.com/unicode-org/icu/commit/4e1d9b30a583ddafb5a6b51d9d987902f8bc9278) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Integrate CLDR 47 release alpha1, part 4, updated unit test`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2025-01-30T13:45:15-08:00

- [d49c124](https://github.com/unicode-org/icu/commit/d49c1242f9ba75a84e61c994a7c4c1286148d193) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Integrate CLDR 47 release alpha1, part 3, source files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2025-01-30T13:45:15-08:00

- [06c2096](https://github.com/unicode-org/icu/commit/06c2096fea5dbc73814342679a2c93d1a1fec6a1) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Integrate CLDR 47 release alpha1, part 2, data files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2025-01-30T13:45:15-08:00

- [90e3e1e](https://github.com/unicode-org/icu/commit/90e3e1e8822536cc0494f0094bb5aa866eb9dd80) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Integrate CLDR 47 release alpha1, part 1, binary files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2025-01-30T13:45:15-08:00

- [fae4512](https://github.com/unicode-org/icu/commit/fae4512d33f49615ae501f15374654aca5901f9a) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `ICU BRS 77: front-load update version to 77.0.1`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2024-12-10T19:15:05-08:00

- [3b9c0fc](https://github.com/unicode-org/icu/commit/3b9c0fc4a5f6115276fc2bb551bcf550221b83ed) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Integrate CLDR 46.1 beta1 to ICU main, part 3: ICU code/test mods`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2024-12-09T13:08:14-08:00

- [e2581fd](https://github.com/unicode-org/icu/commit/e2581fd1acd49e92c3ac140cde872d1071e52cc9) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Integrate CLDR 46.1 beta1 to ICU main, part 2: source data/test generated or copied from CLDR`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2024-12-09T13:08:14-08:00

- [c3929d1](https://github.com/unicode-org/icu/commit/c3929d15951700948042576162516c200c30580f) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Integrate CLDR 46.1 beta1 to ICU main, part 1: binary data`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2024-12-09T13:08:14-08:00

- [d6f8a14](https://github.com/unicode-org/icu/commit/d6f8a14f8c377f2f0b3917b04179e7ac617c7e49) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Merge maint/maint-76 to main (#3270)`
	- Authored by Shane F. Carr <shane@unicode.org>
	- Committed at 2024-11-19T10:35:26-08:00

- [700c5e3](https://github.com/unicode-org/icu/commit/700c5e36a1e96a5672eb5a07b36c1fc41fef016b) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `Merge maint/maint-76 to main (#3258)`
	- Authored by Shane F. Carr <shane@unicode.org>
	- Committed at 2024-11-11T17:33:19-08:00

- [698217e](https://github.com/unicode-org/icu/commit/698217ef630fb8f2a88f1bbeec778f9fc5bf4d84) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `ICU 76 final release`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-10-24T16:18:07-07:00

- [3cd97ad](https://github.com/unicode-org/icu/commit/3cd97add1ee482a5b7753103f80173e46997194f) [ICU-22922](https://unicode-org.atlassian.net/browse/ICU-22922) `migrate download index`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-09-30T17:05:04-07:00

#### Issue ICU-22927

_Jira issue is open_
- [ICU-22927](https://unicode-org.atlassian.net/browse/ICU-22927): `Deduplicate C & Java testdata to a common directory`
	- Assigned to Mihai Nita
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): test_fmwk_util

##### Commits with Issue ICU-22927

- [8b28c38](https://github.com/unicode-org/icu/commit/8b28c3843f20641e2eca54198e208745d5baaffa) [ICU-22927](https://unicode-org.atlassian.net/browse/ICU-22927) `Duplicate (back) the MF2 test data between icu4c and icu4j`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2024-11-13T14:09:42-08:00

#### Issue ICU-22929

_Jira issue is open_
- [ICU-22929](https://unicode-org.atlassian.net/browse/ICU-22929): `improve fuzzer coverage for ICU 77`
	- Assigned to Frank Yung-Fong Tang
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): test_fmwk_util

##### Commits with Issue ICU-22929

- [13a5e29](https://github.com/unicode-org/icu/commit/13a5e29644616f5c4e4a68380f6637dc7ee53c0d) [ICU-22929](https://unicode-org.atlassian.net/browse/ICU-22929) `Improve fuzzer to find leak from udat_open`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2025-01-14T15:41:06-08:00

#### Issue ICU-22934

_Jira issue is open_
- [ICU-22934](https://unicode-org.atlassian.net/browse/ICU-22934): `Stack-overflow in RBBINode::flattenSets `
	- No assignee!
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): textbounds

##### Commits with Issue ICU-22934

- [5b45e5c](https://github.com/unicode-org/icu/commit/5b45e5c64b7487ded927759ad73637bab5184451) [ICU-22934](https://unicode-org.atlassian.net/browse/ICU-22934) `Limit the number of resursive call`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-10-02T14:01:59-07:00

#### Issue ICU-22954

_Jira issue is open_
- [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954): `Build error in uset.h when `U_SHOW_CPLUSPLUS_HEADER_API` is true but `U_SHOW_CPLUSPLUS_API` is false `
	- Assigned to Fredrik Roubert
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): build_c

##### Commits with Issue ICU-22954

- [4a7a4c7](https://github.com/unicode-org/icu/commit/4a7a4c7521f64f2d104f27583e283a817f01222e) [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954) `USet C++ iter samples no UnicodeString`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2025-02-05T14:47:48-08:00

- [6f93c07](https://github.com/unicode-org/icu/commit/6f93c07a45e7fb1944fa0179591b36413312d16e) [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954) `Revert to using std::u16string instead of UnicodeString.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2025-01-08T10:13:20+09:00

- [df0422e](https://github.com/unicode-org/icu/commit/df0422ed3fc945386c5633cb8f4717fdce31f9fb) [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954) `Workaround: Replace std::u16string member with UnicodeString&.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2025-01-07T12:23:51+09:00

- [b2a47f9](https://github.com/unicode-org/icu/commit/b2a47f9aa47eeaa400018fec1849b0852ca74451) [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954) `Delete copy & assign from IcuTestErrorCode.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2025-01-07T12:23:51+09:00

- [b0ae845](https://github.com/unicode-org/icu/commit/b0ae845e4760a26719b2285fca3fc464cf213aee) [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954) `USetHeaderOnlyTest use unique_ptr`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-12-23T11:17:14-08:00

- [c0a3fe1](https://github.com/unicode-org/icu/commit/c0a3fe15d4420157fbede62470426fcf91299760) [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954) `Partially revert PR #3295 U_ICU_NAMESPACE_OR_INTERNAL, header-only localpointer`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-12-23T11:17:14-08:00

- [38b6d7f](https://github.com/unicode-org/icu/commit/38b6d7fe5ad4b03101c0d2f13b18f5d5baca4673) [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954) `Revert PR #3295 make all LocalXyzPointer header-only`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-12-23T11:17:14-08:00

- [e3bc073](https://github.com/unicode-org/icu/commit/e3bc073737b226f8bd47302f32f83a3993f7792a) [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954) `header-only-test USet C++ iterators`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-12-19T17:40:33-08:00

- [320220e](https://github.com/unicode-org/icu/commit/320220ef694123393a5c5d6eb6a1c7536fc57aba) [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954) `intltest.h & IcuTestErrorCode usable without U_SHOW_CPLUSPLUS_API`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-12-19T17:40:33-08:00

- [7040909](https://github.com/unicode-org/icu/commit/70409090de817283323e7dc995c3025dcda2c59c) [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954) `make all LocalXyzPointer header-only`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-12-19T17:40:33-08:00

- [8655718](https://github.com/unicode-org/icu/commit/8655718531e478428151162313f67432ed28cd9d) [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954) `U_ICU_NAMESPACE_OR_INTERNAL, header-only localpointer`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-12-19T17:40:33-08:00

- [d03826c](https://github.com/unicode-org/icu/commit/d03826cdeec4ad3fd0667f00a551e6a46272897b) [ICU-22954](https://unicode-org.atlassian.net/browse/ICU-22954) `USet C++ iterator return std::u16string`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-12-19T17:40:33-08:00

#### Issue ICU-22962

_Jira issue is open_
- [ICU-22962](https://unicode-org.atlassian.net/browse/ICU-22962): `Integer-overflow in icu::Calendar for ICU77`
	- Assigned to Frank Yung-Fong Tang
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): time_calc

##### Commits with Issue ICU-22962

- [0112e42](https://github.com/unicode-org/icu/commit/0112e4292e5293c6211471a131552469ad6f9595) [ICU-22962](https://unicode-org.atlassian.net/browse/ICU-22962) `Fix int32_t overflow issue when month is large`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2025-02-04T15:39:32-08:00

- [4c9ef1a](https://github.com/unicode-org/icu/commit/4c9ef1a31bc41cd4af5880bb04761c9893c770dc) [ICU-22962](https://unicode-org.atlassian.net/browse/ICU-22962) `Fix int overflow in Calendar::handleComputeJulianDay`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-12-20T16:12:58-08:00

- [a7291c4](https://github.com/unicode-org/icu/commit/a7291c4e515d0fb76204b2dc3bd1683803c1bb01) [ICU-22962](https://unicode-org.atlassian.net/browse/ICU-22962) `Fix int32 overflow in Chinese Calendar`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-12-16T18:02:05-08:00

- [44ea927](https://github.com/unicode-org/icu/commit/44ea9278b97768ee8c5df9d247f9afd43be1ed52) [ICU-22962](https://unicode-org.atlassian.net/browse/ICU-22962) `fix int32_t overflow inside handleComputeJulianDay`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-11-08T16:56:16-08:00

#### Issue ICU-22968

_Jira issue is open_
- [ICU-22968](https://unicode-org.atlassian.net/browse/ICU-22968): `Rearrange bits in trie values in ICU4X normalization data export`
	- Assigned to Henri Sivonen
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): icuapps

##### Commits with Issue ICU-22968

- [494e8cd](https://github.com/unicode-org/icu/commit/494e8cdc9326461dc7f8d236733527219951ac02) [ICU-22968](https://unicode-org.atlassian.net/browse/ICU-22968) `Rearrange bits in trie values in normalization data export for ICU4X`
	- Authored by Henri Sivonen <hsivonen@hsivonen.fi>
	- Committed at 2024-12-12T08:47:07-08:00

#### Issue ICU-22977

_Jira issue is open_
- [ICU-22977](https://unicode-org.atlassian.net/browse/ICU-22977): `CI fails for all windows-msvc- targets`
	- Assigned to Mihai Nita
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): build_c

##### Commits with Issue ICU-22977

- [743998d](https://github.com/unicode-org/icu/commit/743998dfaf93a534dec60de159f2dbdd69324386) [ICU-22977](https://unicode-org.atlassian.net/browse/ICU-22977) `Temp fix for MSVC builds: SkipUWP`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2024-11-21T12:59:41-08:00

#### Issue ICU-22986

_Jira issue is open_
- [ICU-22986](https://unicode-org.atlassian.net/browse/ICU-22986): `ICU4C RBBITest::TestMonkey failure for exhaustive tests related to line break for supp. EastAsian/Emoji`
	- Assigned to Robin Leroy
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): textbounds

##### Commits with Issue ICU-22986

- [7d60bb8](https://github.com/unicode-org/icu/commit/7d60bb844e8718dc342197a06a5c0c90fe7ca77e) [ICU-22986](https://unicode-org.atlassian.net/browse/ICU-22986) `GL takes CM`
	- Authored by Robin Leroy <egg.robin.leroy@gmail.com>
	- Committed at 2024-12-20T03:54:59+01:00

#### Issue ICU-22991

_Jira issue is open_
- [ICU-22991](https://unicode-org.atlassian.net/browse/ICU-22991): `Reduce Calendar memory usage`
	- No assignee!
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): format_date

##### Commits with Issue ICU-22991

- [4fc1b7e](https://github.com/unicode-org/icu/commit/4fc1b7e7f6cff7a6eabecdfbfcaf3f8c10bd5ad1) [ICU-22991](https://unicode-org.atlassian.net/browse/ICU-22991) `Simplified Grego code`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2025-01-24T17:13:51-08:00

- [bd50f8b](https://github.com/unicode-org/icu/commit/bd50f8be32d37f8bcac72fa2a20bdf3228c1e75c) [ICU-22991](https://unicode-org.atlassian.net/browse/ICU-22991) `Reduce unnecessary Grego calculation`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2025-01-08T17:04:00-08:00

- [9eafd8c](https://github.com/unicode-org/icu/commit/9eafd8ca3e61e9e92a8d23f8d107b90100bdf1df) [ICU-22991](https://unicode-org.atlassian.net/browse/ICU-22991) `Reduce Calendar object size`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2025-01-08T12:26:35-08:00

- [6091406](https://github.com/unicode-org/icu/commit/6091406a3a41d0717ae6cba44a458daaf70f2925) [ICU-22991](https://unicode-org.atlassian.net/browse/ICU-22991) `Reduce fStamp to 8 bits`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2025-01-06T18:38:17-08:00

- [841e88b](https://github.com/unicode-org/icu/commit/841e88bc8cc3c470f7743f6557beb98814b1aea3) [ICU-22991](https://unicode-org.atlassian.net/browse/ICU-22991) `Remove unused private fIsSet`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-12-23T14:58:56-08:00

- [e515c84](https://github.com/unicode-org/icu/commit/e515c84645663eee00bf668653e252b73e5cbbed) [ICU-22991](https://unicode-org.atlassian.net/browse/ICU-22991) `Remove unnecessary overload in Calendar`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-12-23T12:52:11-08:00

- [ff31805](https://github.com/unicode-org/icu/commit/ff31805f5617141fd0713b3f6fac486eb9570c85) [ICU-22991](https://unicode-org.atlassian.net/browse/ICU-22991) `Change fIsTimeSet fAreFieldsSet fAreAllFieldsSet fAreFieldsVirtuallySet fIsSet fStamp to private`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-12-23T12:51:13-08:00

- [7546622](https://github.com/unicode-org/icu/commit/7546622f87f7c6efdfd830e723209a982bf424aa) [ICU-22991](https://unicode-org.atlassian.net/browse/ICU-22991) `Remove unnecessary computeGregorianAndDOWFields private`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-12-20T16:33:53-08:00

- [81d0475](https://github.com/unicode-org/icu/commit/81d047524ccbec4fb1a1b5e630227e64e24a25f1) [ICU-22991](https://unicode-org.atlassian.net/browse/ICU-22991) `Remove protected direct access to fStamp`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-12-16T13:17:40-08:00

#### Issue ICU-23032

_Jira issue is open_
- [ICU-23032](https://unicode-org.atlassian.net/browse/ICU-23032): `Fix/Improve Units Documentation and Perform Minor Cleanup`
	- Assigned to Younies Mahmoud
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): units

##### Commits with Issue ICU-23032

- [a262e87](https://github.com/unicode-org/icu/commit/a262e87aa6bcc812cae8750f2a3e11e50ea1b2a1) [ICU-23032](https://unicode-org.atlassian.net/browse/ICU-23032) `Change appendNumber method to accept long instead of int`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2025-02-04T00:58:25+01:00

#### Issue ICU-23033

_Jira issue is open_
- [ICU-23033](https://unicode-org.atlassian.net/browse/ICU-23033): `icuexportdata generates bad scx data for Unicode 16`
	- Assigned to Manish मनीष Goregaokar
	- Status: Accepted
	- Fix Version: 77.1
	- Component(s): properties

##### Commits with Issue ICU-23033

- [bf675e3](https://github.com/unicode-org/icu/commit/bf675e3ba1482dc3201415b7aa7650acf6a59b73) [ICU-23033](https://unicode-org.atlassian.net/browse/ICU-23033) `Regenerate scx value array`
	- Authored by Manish Goregaokar <manishsmail@gmail.com>
	- Committed at 2025-01-31T15:48:20-08:00


