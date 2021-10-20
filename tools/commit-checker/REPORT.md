## Collected 0 commit(s) to exclude
<!--
Copyright (C) 2021 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->
Commit Report
=============

Environment:
- Now: 2021-10-20T13:49:02.833246
- Latest Commit: https://github.com/unicode-org/icu/commit/a0baa69277517d61f862dd767c8b0d277154daa5
- Jira Query: `project=ICU AND fixVersion=70.1`
- Rev Range: `release-69-1..upstream/maint/maint-70`
- Authenticated: `Yes`

## Table Of Contents
- [Closed Issues with No Commit](#closed-issues-with-no-commit)
- [Closed Issues with Illegal Resolution or Commit](#closed-issues-with-illegal-resolution-or-commit)
- [Commits without Jira Issue Tag](#commits-without-jira-issue-tag)
- [Commits with Jira Issue Not Found](#commits-with-jira-issue-not-found)
- [Commits with Open Jira Issue](#commits-with-open-jira-issue)
- [Issue is under Review](#issue-is-under-review)

## Problem Categories
### Closed Issues with No Commit
[🔝Top](#table-of-contents)

Tip: Tickets with type 'Task' or 'User Guide' or resolution 'Fixed by Other Ticket' are ignored.

*Success: No problems in this category!*
### Closed Issues with Illegal Resolution or Commit
[🔝Top](#table-of-contents)

Tip: Fixed tickets should have resolution 'Fixed by Other Ticket' or 'Fixed'.
Duplicate tickets should have their fixVersion tag removed.
Tickets with resolution 'Fixed by Other Ticket' are not allowed to have commits.

*Success: No problems in this category!*

### Commits without Jira Issue Tag
[🔝Top](#table-of-contents)

Tip: If you see your name here, make sure to label your commits correctly in the future.

*Success: No problems in this category!*

### Commits with Jira Issue Not Found
[🔝Top](#table-of-contents)

Tip: Check that these tickets have the correct fixVersion tag.

*Success: No problems in this category!*

### Commits with Open Jira Issue
[🔝Top](#table-of-contents)

Tip: Consider closing the ticket if it is fixed.

#### Open Issues by Component

 - **build_c**: [ICU-21623](#issue-icu-21623) [ICU-21680](#issue-icu-21680)
 - **build_j**: [ICU-21708](#issue-icu-21708)
 - **others**: [ICU-21579](#issue-icu-21579) [ICU-21580](#issue-icu-21580)
 - **team_processes_tools**: [ICU-21776](#issue-icu-21776) [ICU-21581](#issue-icu-21581)
 - **test_fmwk_util**: [ICU-21756](#issue-icu-21756)
 - **time_calc**: [ICU-21767](#issue-icu-21767) [ICU-21429](#issue-icu-21429)


#### Issue ICU-21429

_Jira issue is open_
- ICU-21429: `Time displayed in UTC if TZ-environment variable is set with file path`
	- Assigned to Yoshito Umaoka
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21429
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): time_calc

##### Commits with Issue ICU-21429

- 43276e8 `ICU-21429 Allow timezones with max 2 digits at the end to`
	- Authored by Bernhard Messerklinger <bernhard.messerklinger@br-automation.com>
	- Committed at 2021-09-17T15:26:06-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/43276e8c34b7073fae266d0ff821391c7607c47e

#### Issue ICU-21579

_Jira issue is open_
- ICU-21579: `ICU 70 code warnings/version updates`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21579
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): others

##### Commits with Issue ICU-21579

- b10a467 `ICU-21579 Fix compiler warnings with MSVC.`
	- Authored by Jeff Genovy <29107334+jefgen@users.noreply.github.com>
	- Committed at 2021-08-31T14:03:21-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b10a467212dc70df5811a56c199159e466d793c1

- 7d75a85 `ICU-21579 Compiler warning fixes.`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2021-05-21T12:29:09-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/7d75a85501321952ba263900d96ca21c0baf06f5

#### Issue ICU-21580

_Jira issue is open_
- ICU-21580: `ICU 70 docs minor fixes`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21580
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): others

##### Commits with Issue ICU-21580

- a0baa69 `ICU-21580 fix links to CLDR Language Plural Rules`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2021-10-20T11:45:46-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/a0baa69277517d61f862dd767c8b0d277154daa5

- 289d970 `ICU-21580 Fix typos in icu4j/`
	- Authored by luz paz <luzpaz@users.noreply.github.com>
	- Committed at 2021-07-19T13:22:38-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/289d9703a03494ef0d9dfec122169b22bd9fc84f

- 73eca0a `ICU-21580 Fix typos in icu4c/`
	- Authored by luz paz <luzpaz@github.com>
	- Committed at 2021-07-19T13:22:38-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/73eca0a9c927045a3b5eafdbec9c17d2fcacd5da

- 63fe1ee `ICU-21580 fix TimeZoneFormat doc typo, extra open brace`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2021-06-25T20:11:31+00:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/63fe1ee19469570d4e653cd7a03daacfd5d0b2e0

- b9bb2a7 `ICU-21580 fix RuleBasedCollator doc typo, extra open brace`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2021-06-25T02:15:47+00:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b9bb2a7b57cbfa91427626cefc12485b3f0a4915

- fc28b35 `ICU-21580 fix unicode.org/unicode/ URLs`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2021-06-18T23:39:05+00:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/fc28b3521dd56c611f1b6ac467157a6fd65bb857

#### Issue ICU-21581

_Jira issue is open_
- ICU-21581: `ICU 70rc BRS`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21581
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-21581

- 60c1857 `ICU-21581 ICU Change Reports for 70rc`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2021-09-29T16:17:15-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/60c1857f9692811fb677a16d3591a145ecf2c9a2

- 6115e58 `ICU-21581 Update double-conversion`
	- Authored by Shane F. Carr <shane@unicode.org>
	- Committed at 2021-09-29T12:41:28-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6115e5896665a7d6ae12af99d36c0218b453da22

- 4fd10ba `ICU-21581 check non-stable API macros (mostly U_HIDE_INTERNAL_API)`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-09-29T09:05:40-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/4fd10ba2b753d2fd3c08b446dd1133c1b199bf53

- 2b76d33 `ICU-21581 BRS 70rc, update urename.h pass 2`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-09-28T16:48:50-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2b76d335fb8c51a57048e4d3d40db12b67e114d0

- 7857d74 `ICU-21581 Creates a new workflow to be activated upon merge into main or`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-09-28T15:50:44-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/7857d7424f100a53e0275aae5e533f81bfa38cae

- 4d92a97 `ICU-21581 BRS70RC Adding ICU4J serialization test data for ICU4J 70`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2021-09-28T01:16:35-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/4d92a977524107a32d2640a9b269931dc7b45ae6

- 4e70788 `ICU-21581 BRS70RC Adding API signature file for ICU4J 70`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2021-09-28T01:16:17-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/4e70788350d6c201fdd639ae93231caf6386892b

- 21169d5 `ICU-21581 BRS 70RC Clean up import statements`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2021-09-28T01:16:07-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/21169d55cdc54d8c50ff8502ab048fdbe94359a6

- da5fc8e `ICU-21581 BRSRC 70.1 Version update and regenerate configure for v70.1`
	- Authored by Erik Torres <ertorres@microsoft.com>
	- Committed at 2021-09-23T09:54:12-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/da5fc8e730ff7004b23dae537c5f876b994bf1fa

- b405c1c `ICU-21581 Fix calendar list in userguide`
	- Authored by Rob Meyer <robmeyer@microsoft.com>
	- Committed at 2021-09-22T12:39:33-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b405c1c8db5abdba563e48a2e20fbd3ee3597f28

- d5d0b2d `ICU-21581 integrate CLDR release-40-alpha4 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-09-16T16:15:49-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/d5d0b2d811eca8919c097a512ebb6a3e614ee2f8

- 7851f70 `ICU-21581 integrate CLDR release-40-alpha3 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-09-09T10:57:21-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/7851f708a3dd43fc1e0e9dd784e7dfe9a70915b2

- bbd72fb `ICU-21581 integrate CLDR release-40-alpha2 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-09-01T16:49:45-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/bbd72fb93e03eb3d059a8ac48af8eb25dd866ae2

- 280f0f2 `ICU-21581 Update ICU4J LICENSE file`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2021-08-24T09:58:19-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/280f0f2a2599a1fdf03c2ef02bde8749a9e20638

- 7e07633 `ICU-21581 lingering exhaustive fail, need to separately skip sd_Deva month name exemplar test`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-08-19T22:09:48-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/7e07633997f1f0fc99359fd0f3bccb40e177c152

- f6d4795 `ICU-21581 integrate CLDR release-40-alpha1 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-08-19T15:27:38-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f6d47953c067814f6de37650e4e2c11578090c0b

- 49dda34 `ICU-21581 integrate CLDR 40a0 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-08-18T23:59:19-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/49dda34fb175240a7724c7e039a270126ff7d900

- 75a1514 `ICU-21581 BRS#18 Promote @draft ICU4J API elements from version 68 to @stable`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2021-08-17T09:08:32-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/75a1514889083c7be6c3367be15b6c9f6c3a426f

- 4368f69 `ICU-21581 BRS 70 front-load task scrub closed issues: replace ticket# ICU-11234,`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-08-02T12:33:05-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/4368f69ef4a26c8c42c1812c7a71e30d262a51bd

- 284a1c1 `ICU-21581 BRS 70 front-load task: scrub logKnownIssue for ticket CLDR-14477,`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-07-29T11:20:32-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/284a1c1a95ca74953bafb5e65ff47626df5cf34c

- 17d6471 `ICU-21581 BRS 70rc, update urename.h pass 1`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-07-22T10:35:51-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/17d64710a2bd2cc5112f64af0456dd67e290d7a4

- 0e4b768 `ICU-21581 Promoted @draft 68 APIs to stable`
	- Authored by Rich Gillam <62772518+richgillam@users.noreply.github.com>
	- Committed at 2021-07-19T14:59:57-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/0e4b768289b9511632d48f6fc8d62793190b3bc0

- 4a6ad3d `ICU-21581 integrate CLDR release-40-m1 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-06-15T14:24:21-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/4a6ad3dc93f3891a82f02bb5398a80791b9f7d78

- 48ef451 `ICU-21581 BRSRC 70.0.1 Version update and regenerate configure for v70.0.1`
	- Authored by Erik Torres <ertorres@microsoft.com>
	- Committed at 2021-06-04T14:09:41-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/48ef451b8741f2e932b1338814eae882d6f0f2fa

#### Issue ICU-21623

_Jira issue is open_
- ICU-21623: `ICU4C 69.1 build problem on AIX with xlclang`
	- Assigned to Yoshito Umaoka
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21623
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): build_c

##### Commits with Issue ICU-21623

- 5518bb0 `ICU-21623 Removed linker flag -dexpall for AIX xlclang build.`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2021-05-20T11:49:40-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/5518bb0c84ad8cc27d5a9b684ea322cb7dc979fe

#### Issue ICU-21680

_Jira issue is open_
- ICU-21680: `Missing compilation flags when generating dependency information on Solaris`
	- Assigned to Yoshito Umaoka
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21680
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): build_c

##### Commits with Issue ICU-21680

- 9ff3936 `ICU-21680 Add -std flag when generating dependency information`
	- Authored by David Haney <david.haney@gmail.com>
	- Committed at 2021-07-27T08:40:09-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/9ff39368b26ffae32bff1b49885eeb788e6c66e7

#### Issue ICU-21708

_Jira issue is open_
- ICU-21708: `Bump ant from 1.10.9 to 1.10.11`
	- Assigned to Yoshito Umaoka
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21708
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): build_j

##### Commits with Issue ICU-21708

- 6046f7b `ICU-21708 Update ant version in cldr-to-icu tool`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2021-08-24T13:46:57-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6046f7b9e7e9a5e3f1ce8cf06012747f9db2daaf

#### Issue ICU-21756

_Jira issue is open_
- ICU-21756: `port of UnicodeKnownIssues to icu4j`
	- Assigned to Steven R. Loomis
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21756
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): test_fmwk_util

##### Commits with Issue ICU-21756

- 7bc2009 `ICU-21756 icu4j: port UnicodeKnownIssues.java from CLDR`
	- Authored by Steven R. Loomis <srl295@gmail.com>
	- Committed at 2021-09-21T12:16:57-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/7bc2009f7f0bfcfc71eb4018046f6ceb8bb9f655

#### Issue ICU-21767

_Jira issue is open_
- ICU-21767: `Time zone data patch including 2021b changes`
	- Assigned to Yoshito Umaoka
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21767
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): time_calc

##### Commits with Issue ICU-21767

- 7561cb2 `ICU-21767 Merging tz2021b changes.`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2021-09-28T18:12:00-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/7561cb28577cf49c199449c7196f55fc3c96b3aa

#### Issue ICU-21776

_Jira issue is open_
- ICU-21776: `ICU 70 BRS`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21776
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-21776

- 3a601a8 `ICU-21776 integrate CLDR release-40-beta3 to ICU maint/maint-70`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-10-14T14:48:15-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/3a601a80a39d347f9566cfa33522d4c453298ae9

- ec894b7 `ICU-21776 Update versions for GA and regenerate Jar files`
	- Authored by Erik Torres <ertorres@microsoft.com>
	- Committed at 2021-10-06T17:40:24-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/ec894b728bfd26ed69a52a56425ffed041ccbfd4

- 38337a5 `ICU-21776 integrate CLDR release-40-beta2 to ICU maint/maint-70`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-10-06T09:04:38-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/38337a53c07416d79a007bc457276284e55abeea

### Issue is under Review

[🔝Top](#table-of-contents)

These issues are otherwise accounted for above, but are in review.
- ICU-21727: `Update commitchecker to include reviewer`
	- _Issue is under Review_
	- Assigned to Steven R. Loomis
	- Reviewer: Shane Carr
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21727
	- Status: Reviewing
	- Fix Version: 70.1
	- Component(s): team_processes_tools

## Total Problems: 10
## Issues under review: 1
