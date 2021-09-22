## Collected 0 commit(s) to exclude
<!--
Copyright (C) 2021 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->
Commit Report
=============

Environment:
- Now: 2021-09-22T16:30:15.481535
- Latest Commit: https://github.com/unicode-org/icu/commit/e5502fe8622619df61fe812d2b8d9f2ca615fb7a
- Jira Query: `project=ICU AND fixVersion=70.1`
- Rev Range: `release-69-1..upstream/main`
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

- ICU-21620: `Add ICU4J CI to build on Java 7`
	- _Closed Issues with No Commit_
	- Assigned to Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21620
	- Status: Done
	- Resolution: Fixed
	- Fix Version: 70.1
	- Component(s): build_j

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

 - **build_c**: [ICU-21680](#issue-icu-21680) [ICU-21623](#issue-icu-21623)
 - **build_j**: [ICU-21708](#issue-icu-21708) [ICU-21038](#issue-icu-21038)
 - **format_number**: [ICU-21685](#issue-icu-21685)
 - **locale_id**: [ICU-20870](#issue-icu-20870)
 - **others**: [ICU-21630](#issue-icu-21630) [ICU-21580](#issue-icu-21580) [ICU-21579](#issue-icu-21579) [ICU-21638](#issue-icu-21638) [ICU-21662](#issue-icu-21662) [ICU-21555](#issue-icu-21555)
 - **properties**: [ICU-11891](#issue-icu-11891) [ICU-21635](#issue-icu-21635)
 - **team_processes_tools**: [ICU-21568](#issue-icu-21568) [ICU-21581](#issue-icu-21581) [ICU-21727](#issue-icu-21727)
 - **test_fmwk_util**: [ICU-21756](#issue-icu-21756)
 - **time_calc**: [ICU-21530](#issue-icu-21530) [ICU-21429](#issue-icu-21429)
 - **units**: [ICU-21544](#issue-icu-21544) [ICU-21656](#issue-icu-21656) [ICU-21730](#issue-icu-21730)


#### Issue ICU-11891

_Jira issue is open_
- ICU-11891: `UnicodeSet fails to round trip on unsafeBackwards set`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-11891
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): properties

##### Commits with Issue ICU-11891

- f5cc0c4 `ICU-11891 UnicodeRegex change supplementary escapes to Java regex syntax`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2021-09-20T17:05:18-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f5cc0c43d6434049f672adc815fd188ce2911501

- 3f0e003 `ICU-11891 make UnicodeSet.toPattern() well-formed & round-trip`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2021-09-17T13:49:13-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/3f0e003901c155f88a99e2fc660c12e769e2f8f1

#### Issue ICU-20870

_Jira issue is open_
- ICU-20870: `Canonicalize locales when looking up names`
	- Assigned to Peter Edberg
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20870
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): locale_id

##### Commits with Issue ICU-20870

- ff8516b `ICU-20870 Fix breakage on UCONFIG_NO_FORMATTING`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2021-09-13T20:21:13-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/ff8516b0dddcf49d760144f84ec0be07b53f4e66

- 0da0fab `ICU-20870 If locale/lang name lookup fails, canonicalize lang and try again`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-09-13T09:50:33-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/0da0fabfaefc479ffde61b1ed8c413803362915a

#### Issue ICU-21038

_Jira issue is open_
- ICU-21038: `Include localespiCheck in the standard test target`
	- Assigned to Yoshito Umaoka
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21038
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): build_j

##### Commits with Issue ICU-21038

- 26c61c2 `ICU-21038 Run ICU4J localespiCheck as a part of CI build`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2021-09-03T09:05:51-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/26c61c236cead4cae68a1e35f8b9e3b023a4ad39

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

#### Issue ICU-21530

_Jira issue is open_
- ICU-21530: `TimeZone::createEnumeration() should take UErrorCode& as a method argument`
	- Assigned to Yoshito Umaoka
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21530
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): time_calc

##### Commits with Issue ICU-21530

- 369357a `ICU-21530 Added U_HIDE_DEPRECATED_API to deprecated methods.`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2021-09-03T09:04:54-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/369357aaa7ff13553ac9943de31d2e69f9313de4

#### Issue ICU-21544

_Jira issue is open_
- ICU-21544: `unit format in number formatter return U_INTERNAL_PROGRAM_ERROR with "year-and-" (except month) and  "month-and-"`
	- Assigned to Younies Mahmoud
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21544
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): units

##### Commits with Issue ICU-21544

- f1f0b22 `ICU-21544 Throw argument error when the units are not convertible.`
	- Authored by Younies <younies.mahmoud@gmail.com>
	- Committed at 2021-09-22T19:55:58+02:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f1f0b22a2afe6c80a9d2d21652a5de6aaac87554

#### Issue ICU-21555

_Jira issue is open_
- ICU-21555: `Follow up on bug: 500+ spelling errors in various source files`
	- Assigned to Erik Torres Aguilar
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21555
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): others

##### Commits with Issue ICU-21555

- 2b895a7 `ICU-21555 Fix typos in repo from letter d to i`
	- Authored by Erik Torres <ertorres@microsoft.com>
	- Committed at 2021-08-30T16:45:43-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2b895a71e1b77b255e94eef9b621a546f015726a

- 3f043c7 `ICU-21555 Fix typos from G to L`
	- Authored by Erik Torres <ertorres@microsoft.com>
	- Committed at 2021-06-07T16:09:09-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/3f043c7693e20c8cded76035918dad104e7256e3

- cfefa03 `ICU-21555 fix typos for D, E and F found in the repo`
	- Authored by Erik Torres <ertorres@microsoft.com>
	- Committed at 2021-05-10T11:09:05-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/cfefa035397c017c06df465dc19eb5f4aad1ef17

#### Issue ICU-21568

_Jira issue is open_
- ICU-21568: `Fixes for cldr-to-icu tools`
	- Assigned to Steven R. Loomis
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21568
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-21568

- 2dce628 `ICU-21568 Pre-initialize CLDRConfig and SupplementalDataInfo`
	- Authored by Steven R. Loomis <srl295@gmail.com>
	- Committed at 2021-04-01T20:25:33-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2dce62892b6b00df02195a35ca09ebd8e082e80f

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

#### Issue ICU-21630

_Jira issue is open_
- ICU-21630: `Ignore .DS_Store files`
	- Assigned to Peter Edberg
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21630
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): others

##### Commits with Issue ICU-21630

- 635a037 `ICU-21630 Ignore .DS_Store files`
	- Authored by Leander Schulten <Leander.Schulten@rwth-aachen.de>
	- Committed at 2021-09-08T10:44:09-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/635a0371213f2a6d8a31f31cd5e1cb29ad681326

#### Issue ICU-21635

_Jira issue is open_
- ICU-21635: `Unicode 14`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21635
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): properties

##### Commits with Issue ICU-21635

- 41aa715 `ICU-21635 Unicode 14 data files 20210820, line break LB30b.2`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2021-08-23T22:11:49+00:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/41aa7159ea2e79c0081c42b0d96d4aa352b03f41

- d4c92eb `ICU-21635 Unicode 14 beta`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2021-06-21T22:26:15+00:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/d4c92ebcfcc62135498052e1629dfa2623807009

#### Issue ICU-21638

_Jira issue is open_
- ICU-21638: `Update ICU4J performance scripts to work again `
	- Assigned to Craig Cornelius
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21638
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): others

##### Commits with Issue ICU-21638

- 4fff008 `ICU-21638 re-enable some of the ICU4J performance tests`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2021-07-26T14:11:32-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/4fff0085e5aeb3944843b018637399ea2a60addd

#### Issue ICU-21656

_Jira issue is open_
- ICU-21656: `Formatting pressure value in psi and mmHg doesn't work`
	- Assigned to Younies Mahmoud
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21656
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): units

##### Commits with Issue ICU-21656

- 9d26c91 `ICU-21656 fix wrong matching categories.`
	- Authored by Younies <younies.mahmoud@gmail.com>
	- Committed at 2021-09-21T21:06:14+02:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/9d26c917f225ce5d7abf3beb1741dce27a3d9554

#### Issue ICU-21662

_Jira issue is open_
- ICU-21662: `Add UVector.adoptElement method to simplify memory management`
	- Assigned to Andy Heninger
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21662
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): others

##### Commits with Issue ICU-21662

- e5502fe `ICU-21662 Userguide on Adoption and UErrorCode`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2021-09-22T11:10:23-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/e5502fe8622619df61fe812d2b8d9f2ca615fb7a

- 35dff23 `ICU-21662 UVector cleanup in rbtz.cpp`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2021-09-21T16:29:51-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/35dff23fb54a3566d19bc864a3ca4b5f308145eb

- 6f1d83c `ICU-21662 UVector cleanup in basictz.cpp`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2021-09-17T14:35:18-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6f1d83cf6314cadeeca4cfc2f45c22fe6d19ee91

- 46861a5 `ICU-21662 UVector Error Handling in Regex`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2021-09-14T19:24:23-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/46861a5c78367f7c720559243d6bf96146ee070f

- 0ec329c `ICU-21662 Improve UVector error handling.`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2021-09-08T17:24:52-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/0ec329c6e17539d7662942be09204a1d4190761e

- 081cf77 `ICU-21662 Improve UVector error handling.`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2021-09-02T19:15:36-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/081cf773302a4ba23faa9bfdbbf3e5707c7f8b0e

- c26aebe `ICU-21662 Rename UVector::addElement().`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2021-07-28T15:36:50-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/c26aebe802f1a87483f70ad7557fa0ce52061eb9

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

#### Issue ICU-21685

_Jira issue is open_
- ICU-21685: `In list of currencies from ucurr_openISOCurrencies(): Add VES, remove EQE`
	- Assigned to Peter Edberg
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21685
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): format_number

##### Commits with Issue ICU-21685

- 6244d57 `ICU-21685 In list of currencies from ucurr_openISOCurrencies(): add VES, remove EQE`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-09-08T10:49:14-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6244d57559790eedf1ca88082c5baa1be6e638d9

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

#### Issue ICU-21727

_Jira issue is open_
- ICU-21727: `Update commitchecker to include reviewer`
	- Assigned to Steven R. Loomis
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21727
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-21727

- 0d407fc `ICU-21727 Commit Checker: add Reviewer: header`
	- Authored by Steven R. Loomis <srl295@gmail.com>
	- Committed at 2021-09-03T11:46:32-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/0d407fc616bc3a6178c3acdc912aef38858ac3ba

#### Issue ICU-21730

_Jira issue is open_
- ICU-21730: `Units improvements / performance / cleanup`
	- Assigned to Younies Mahmoud
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21730
	- Status: Accepted
	- Fix Version: 70.1
	- Component(s): units

##### Commits with Issue ICU-21730

- e03dce6 `ICU-21730 Port `testGetPreferencesFor` ICU4C tests to ICU4J`
	- Authored by Younies <younies.mahmoud@gmail.com>
	- Committed at 2021-09-08T23:30:18+02:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/e03dce66effc836eb6d81edc100c2cff17f1c33a

- f811ae9 `ICU-21730 Check unit aliases support.`
	- Authored by Younies <younies.mahmoud@gmail.com>
	- Committed at 2021-08-31T18:34:12+02:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f811ae946f86c986a905134d92f465cee7bdb7f7

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

### Issue is under Review

[🔝Top](#table-of-contents)

These issues are otherwise accounted for above, but are in review.
- ICU-21215: `Add additional methods to make LN[R]F friendlier`
	- _Issue is under Review_
	- Assigned to Shane Carr
	- Reviewer: Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21215
	- Status: Reviewing
	- Fix Version: 70.1
	- Component(s): format_number
- ICU-21590: `No skeleton syntax to set maximum integer width to 0`
	- _Issue is under Review_
	- Assigned to Shane Carr
	- Reviewer: Rich Gillam
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21590
	- Status: Reviewing
	- Fix Version: 70.1
	- Component(s): format_number
- ICU-21654: `skeleton for precision::increment is strange`
	- _Issue is under Review_
	- Assigned to Shane Carr
	- Reviewer: Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21654
	- Status: Reviewing
	- Fix Version: 70.1
	- Component(s): format_number
- ICU-21668: `Rounding increment returns all zero string`
	- _Issue is under Review_
	- Assigned to Shane Carr
	- Reviewer: Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21668
	- Status: Reviewing
	- Fix Version: 70.1
	- Component(s): format_number
- ICU-21683: `UFormattedNumberRange keeps state from previous format calls`
	- _Issue is under Review_
	- Assigned to Shane Carr
	- Reviewer: Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21683
	- Status: Reviewing
	- Fix Version: 70.1
	- Component(s): format_number
- ICU-21684: `Avoid calling memmove for each digit when formatting number ranges`
	- _Issue is under Review_
	- Assigned to Shane Carr
	- Reviewer: Rich Gillam
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21684
	- Status: Reviewing
	- Fix Version: 70.1
	- Component(s): format_number
- ICU-21693: `FormattedNumber::toDecimalNumber() fails for the number zero`
	- _Issue is under Review_
	- Assigned to Shane Carr
	- Reviewer: Rich Gillam
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21693
	- Status: Reviewing
	- Fix Version: 70.1
	- Component(s): format_number

## Total Problems: 24
## Issues under review: 7
