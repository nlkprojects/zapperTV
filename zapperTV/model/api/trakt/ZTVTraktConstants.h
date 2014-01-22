//
//  ZTVTraktConstants.h
//  zapperTV
//
//  Created by Nkashama Leo Kabeya on 08/01/2014.
//  Copyright (c) 2014 Nkashama Kabeya. All rights reserved.
//


#pragma mark - API URL
static NSString * const kZCTRAKTBaseURL = @"://api.trakt.tv/";

#pragma mark - ACCOUNT

//POST METHODS...
static NSString * const kZCTRAKTCreateAccount       = @"account/create/";
static NSString * const kZCTRAKTCreateAccountJSON   = @"{\"username\":\"{username}\",\"password\": \"{password}\",\"email\":\"{email}\"}"; //JSON SENT TO TRAKT...
static NSString * const kZCTRAKTAccountSettings     = @"account/settings/";
static NSString * const kZCTRAKTAccountSettingsJSON = @"{\"username\":\"{username}\",\"password\": \"{password}\"}"; //JSON SENT TO TRAKT...

#pragma mark - ACTIVITY
/**


 TYPES (OPTIONAL)
 Defaults to all, but you can instead send a comma delimited list of types. For example, the first part of the URL after the key could be /all or /movie,show or /list.

 Supported types:
 episode
 show
 movie
 list

 ACTIONS (OPTIONAL)

 Defaults to all, but you can instead send a comma delimited list of actions. For example, the second part of the URL after the key could be /all or /watching,scrobble,seen or /rating. Make sure you set the types part of the URL to something too.

 Supported types:
 watching episode, movie
 scrobble episode, movie
 checkin episode, movie
 seen episode, movie
 collection episode, movie
 rating episode, movie, show
 watchlist episode, movie, show
 shout episode, movie, show
 review episode, movie, show
 created list
 item_added list

 START_TS (OPTIONAL)

 Specify the start timestamp in PST. Only activity from this timestamp forward will be returned. This is useful to sync up actions on a regular basis. For example, get activity over the past week only by setting the timestamp to be 1 week ago.

 END_TS (OPTIONAL)

 Specify the end timestamp in PST. Only activity from this timestamp previous will be returned. This is useful to sync up actions within a specific time period.


**/

//GET METHODS...
static NSString * const kZCTRAKTActivityCommunity    = @"activity/community{FORMAT}/";
static NSString * const kZCTRAKTActivityEpisodes     = @"activity/episodes{FORMAT}/";
static NSString * const kZCTRAKTActivityMovies       = @"activity/movies{FORMAT}/";
static NSString * const kZCTRAKTActivitySeasons      = @"activity/seasons{FORMAT}/";
static NSString * const kZCTRAKTActivityShows        = @"activity/shows{FORMAT}/";
static NSString * const kZCTRAKTActivityUser         = @"activity/user{FORMAT}/";
static NSString * const kZCTRAKTActivityUserEpisodes = @"activity/user/episodes{FORMAT}/";
static NSString * const kZCTRAKTActivityUserMovies   = @"activity/user/movies{FORMAT}/";
static NSString * const kZCTRAKTActivityUserSeasons  = @"activity/user/seasons{FORMAT}/";
static NSString * const kZCTRAKTActivityUserShows    = @"activity/user/shows{FORMAT}/";

//POST METHODS...
static NSString * const kZCTRAKTActivityFriends      = @"activity/friends/";
static NSString * const kZCTRAKTActivityFriendsJSON  = @"{\"timestamps\":{\"start\":{start},\"current\":{current}},\"activity\":[{activity}]}"; //JSON SENT TO TRAKT...

#pragma mark - CALENDAR

//GET METHODS...
static NSString * const kZCTRAKTCalendar      = @"calendar/premieres{FORMAT}/";
static NSString * const kZCTRAKTCalendarShows = @"calendar/shows{FORMAT}/";

#pragma mark - COMMENT

//POST METHODS...
static NSString * const kZCTRAKTCommentEpisode     = @"comment/episode/";
static NSString * const kZCTRAKTCommentEpisodeJSON = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"tvdb_id\":{TVDB_ID},\"title\":\"{TITLE}\",\"year\":   {YEAR},\"season\":{SEASON},\"episode\":{EPISODE},\"comment\":\"{COMMENT}\",\"spoiler\":{SPOILER},\"review\":{REVIEW}}"; //JSON SENT TO TRAKT...
static NSString * const kZCTRAKTCommentMovie       = @"comment/movie/";
static NSString * const kZCTRAKTCommentShow        = @"comment/show/";
static NSString * const kZCTRAKTCommentShowJSON    = @"{\"username\": \"{USERNAME}\",\"password\":\"{PASSWORD}\",\"tvdb_id\":{TVDB_ID},\"title\": \"{TITLE}\",\"year\": {YEAR},\"comment\": \"{COMMENT}\",\"spoiler\":{SPOILER},\"review\":{REVIEW}}"; //JSON SENT TO TRAKT...

#pragma mark - GENRES

//GET METHODS...
static NSString * const kZCTRAKTGenresMovies = @"genres/movies{FORMAT}/";
static NSString * const kZCTRAKTGenresShow   = @"genres/shows{FORMAT}/";

#pragma mark - LISTS

//POST METHODS... PRIVACY LEVELS --> friends,private,public
static NSString * const kZCTRAKTListsAdd             = @"lists/add/";
static NSString * const kZCTRAKTListsAddJSON         = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"name\":\"{NAME}\",\"description\":\"{DESC}\",\"privacy\": \"{PRIVACY}\",\"show_numbers\": {SHOW_NUMS},\"allow_shouts\":{SHOW_SHOUTS}}"; //JSON SENT TO TRAKT...
static NSString * const kZCTRAKTListsDelete          = @"lists/delete/";
static NSString * const kZCTRAKTListsDeleteJSON      = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"slug\":\"{SLUG}\"}"; //JSON SENT TO TRAKT...
static NSString * const kZCTRAKTListsItemsAdd        = @"lists/items/add/";
static NSString * const kZCTRAKTListsItemsAddJSON    = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"slug\":\"{SLUG}\",\"items\":[{ITEMS}]}";

/******************** ITEMS EXAMPLE
 "items": [
            {
                "type": "movie",
                "imdb_id": "tt0372784",
                "title": "Batman Begins",
                "year": 2005
            },
            {
                "type": "show",
                "tvdb_id": "80337",
                "title": "Mad Men"
            },
            {
                "type": "season",
                "tvdb_id": "80337",
                "title": "Mad Men",
                "season": 1
            },
            {
                "type": "episode",
                "tvdb_id": "80337",
                "title": "Mad Men",
                "season": 1,
                "episode": 5
            }
        ]
 ************************/

static NSString * const kZCTRAKTListsItemsDelete     = @"lists/items/delete/";
static NSString * const kZCTRAKTListsItemsDeleteJSON = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"slug\":\"{SLUG}\",\"items\":[{ITEMS}]}";
static NSString * const kZCTRAKTListsUpdate          = @"lists/update/";
static NSString * const kZCTRAKTListsUpdateJSON      = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"slug\":\"{SLUG}\",\"name\":\"{NAME}\",\"privacy\":\"{PRIVACY}\",\"show_numbers\":{SHOW_NUMS},\"allow_shouts\":{ALLOW_SHOUTS}}";

#pragma mark - MOVIES

// GET METHODS...
static NSString * const kZCTRAKTMoviesTrending = @"movies/trending{FORMAT}/";
static NSString * const kZCTRAKTMoviesUpdated  = @"movies/updated{FORMAT}/";

#pragma mark - MOVIE

//GET METHODS...
static NSString * const kZCTRAKTMovieComments    = @"movie/comments{FORMAT}/";
static NSString * const kZCTRAKTMovieRelated     = @"movie/related{FORMAT}/";
static NSString * const kZCTRAKTMovieStats       = @"movie/stats{FORMAT}/";
static NSString * const kZCTRAKTMovieSummary     = @"movie/summary{FORMAT}/";
static NSString * const kZCTRAKTMovieSummaries   = @"movie/summaries{FORMAT}/";
static NSString * const kZCTRAKTMovieWatchingNow = @"movie/watchingnow{FORMAT}/";

//POST METHODS...
static NSString * const kZCTRAKTMovieCancelCheckin      = @"movie/cancelcheckin/";
static NSString * const kZCTRAKTMovieCancelCheckinJSON  = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\"}";
static NSString * const kZCTRAKTMovieCancelWatching     = @"movie/cancelwatching/";
static NSString * const kZCTRAKTMovieCancelWatchingJSON = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\"}";
static NSString * const kZCTRAKTMovieCheckin            = @"movie/checkin/";
static NSString * const kZCTRAKTMovieCheckinJSON        = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"imdb_id\":\"{IMDB_ID}\",\"title\":\"{TITLE}\",\"year\":{YEAR},\"duration\":{DURATION},\"app_version\":\"{VERSION}\",\"app_date\":\"{BUILD_DATE}\",\"venue_id\":{VENUE_ID},\"shared\":{\"facebook\":false,\"twitter\":false},\"message\":\"{MESSAGE}\"}";
static NSString * const kZCTRAKTMovieScrobble           = @"movie/scrobble/";
static NSString * const kZCTRAKTMovieScrobbleJSON       = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"imdb_id\":\"{IMDB_ID}\",\"title\":\"{TITLE}\",\"year\":{YEAR},\"duration\":{DURATION},\"progress\":{PROGRESS},\"plugin_version\":\"{VERSION}\",\"media_center_version\":\"{MC_VERSION}\",\"media_center_date\":\"{MC_BUILD_DATE}\"}";
static NSString * const kZCTRAKTMovieSeen               = @"movie/seen/";
static NSString * const kZCTRAKTMovieSeenJSON           = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"movies\": [ {MOVIES} ] }";
/*  MOVIE SEEN JSON EXAMPLE...

    {
        "imdb_id": "tt0114746",
        "title": "Twelve Monkeys",
        "year": 1995,
        "last_played": "2012-09-30T21:00:00-05:00"
    }

*/
static NSString * const kZCTRAKTMovieLibrary            = @"movie/library/";
static NSString * const kZCTRAKTMovieLibraryJSON        = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"movies\": [ {MOVIES} ] }";
/*  MOVIE LIBRARY JSON EXAMPLE...

 {
 "imdb_id": "tt0114746",
 "title": "Twelve Monkeys",
 "year": 1995
 }

 */
static NSString * const kZCTRAKTMovieUnlibrary          = @"movie/unlibrary";
static NSString * const kZCTRAKTMovieUnlibraryJSON      = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"movies\": [ {MOVIES} ] }";
static NSString * const kZCTRAKTMovieUnseen             = @"movie/unseen";

//JSON OBJECT FOR A MOVIE IS SIMILAR TO THE SEEN JSON OBJECT EXCEPT THAT THERE IS NO 'LAST PLAYED' ELEMENT...
static NSString * const kZCTRAKTMovieUnseenJSON         = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"movies\": [ {MOVIES} ] }";
static NSString * const kZCTRAKTMovieUnwatchList        = @"movie/unwatchlist";
static NSString * const kZCTRAKTMovieUnwatchListJSON    = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"movies\": [ {MOVIES} ] }";
static NSString * const kZCTRAKTMovieWatching           = @"movie/watching";
static NSString * const kZCTRAKTMovieWatchingJSON       = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"imdb_id\":\"{IMDB_ID}\",\"title\":\"{TITLE}\",\"year\":{YEAR},\"duration\":{DURATION},\"progress\":{PROGRESS},\"plugin_version\":\"{VERSION}\",\"media_center_version\":\"{MC_VERSION}\",\"media_center_date\":\"{MC_BUILD_DATE}\"}";
static NSString * const kZCTRAKTMovieWatchList          = @"movie/watchlist";
static NSString * const kZCTRAKTMovieWatchListJSON      = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"movies\": [ {MOVIES} ] }";


#pragma mark - NETWORK

//POST METHODS...
static NSString * const kZCTRAKTNetworkApprove      = @"network/approve";
static NSString * const kZCTRAKTNetworkApproveJSON  = @"{\"username\":\"{USERNAME}\",\"password\":\"{PASSWORD}\",\"user\":\"{USER}\",\"follow_back\":{FOLLOW_BACK}}";
static NSString * const kZCTRAKTNetworkDeny         = @"network/deny";
static NSString * const kZCTRAKTNetworkDenyJSON     = @"";
static NSString * const kZCTRAKTNetworkFollow       = @"network/follow";
static NSString * const kZCTRAKTNetworkFollowJSON   = @"";
static NSString * const kZCTRAKTNetworkRequests     = @"network/requests";
static NSString * const kZCTRAKTNetworkRequestsJSON = @"";
static NSString * const kZCTRAKTNetworkUnfollow     = @"network/unfollow";
static NSString * const kZCTRAKTNetworkUnfollowJSON = @"";













