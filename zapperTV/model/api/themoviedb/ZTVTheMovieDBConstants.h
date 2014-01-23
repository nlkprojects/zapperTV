//  Created by Nkashama Leo Kabeya on 07/01/2014.
//  Copyright (c) 2014 Nkashama Kabeya. All rights reserved.
//



#pragma mark - API URL
static NSString * const kZCtMDBAPIBaseURL  = @"://api.themoviedb.org/";
static NSString * const kZCtMDBAPIVersion  = @"3/";
static NSString * const kZCtMDBAPIKey      = @"?api_key={key}";
static NSString * const kZCtMDBAPIQuery    = @"query={query}";
static NSString * const kZCtMDBAPILang     = @"language={lang}";
static NSString * const kZCtMDBAPIImageURL = @"{base_url}/t/p/{size}/{image_path}";


#pragma mark - Configuration
static NSString * const kZCtMDBConfiguration = @"configuration";

#pragma mark - TV SHOW
static NSString * const kZCtMDBTVShow             = @"tv/{id}";
static NSString * const kZCtMDBTVShowCredits      = @"tv/{id}/credits";
static NSString * const kZCtMDBTVShowExternalIDS  = @"tv/{id}/external_ids";
static NSString * const kZCtMDBTVShowImages       = @"tv/{id}/images";
static NSString * const kZCtMDBTVShowTranslations = @"tv/{id}/translations";
static NSString * const kZCtMDBTVShowTopRated     = @"tv/top_rated";
static NSString * const kZCtMDBTVShowPopular      = @"tv/popular";

#pragma mark - TV SHOW SEASON
static NSString * const kZCtMDBTVShowSeason            = @"tv/{id}/season/{season_number}";
static NSString * const kZCtMDBTVShowSeasonCredits     = @"tv/{id}/season/{season_number}/credits";
static NSString * const kZCtMDBTVShowSeasonExternalIDS = @"tv/{id}/season/{season_number}/external_ids";
static NSString * const kZCtMDBTVShowSeasonImages      = @"tv/{id}/season/{season_number}/images";

#pragma mark - TV SHOW EPISODE
static NSString * const kZCtMDBTVShowEpisode            = @"tv/{id}/season/{season_number}/episode/{episode_number}";
static NSString * const kZCtMDBTVShowEpisodeCredits     = @"tv/{id}/season/{season_number}/episode/{episode_number}/credits";
static NSString * const kZCtMDBTVShowEpisodeExternalIDS = @"tv/{id}/season/{season_number}/episode/{episode_number}/external_ids";
static NSString * const kZCtMDBTVShowEpisodeImages      = @"tv/{id}/season/{season_number}/episode/{episode_number}/images";

#pragma mark - SEARCH
static NSString * const kZCtMDBSearchTV     = @"search/tv";
static NSString * const kZCtMDBSearchPerson = @"search/person";
static NSString * const kZCtMDBSearchMovie  = @"search/movie";
static NSString * const kZCtMDBTVSearchCompany = @"search/company";

#pragma mark - Movies
static NSString * const kZCtMDBTVMovie = @"movie/{id}";
static NSString * const kZCtMDBTVMovieAlternativeTitle = @"movie/{id}/alternative_titles";
static NSString * const kZCtMDBTVMovieCasts = @"movie/{id}/casts";
static NSString * const kZCtMDBTVMovieImages = @"movie/{id}/images";
static NSString * const kZCtMDBTVMovieKeywords = @"movie/{id}/keywords";
static NSString * const kZCtMDBTVMovieReleases = @"movie/{id}/releases";
static NSString * const kZCtMDBTVMovieTrailers = @"movie/{id}/trailers";
static NSString * const kZCtMDBTVMovieTranslations = @"movie/{id}/translations";
static NSString * const kZCtMDBTVMovieSimilar = @"movie/{id}/similar_movies";
static NSString * const kZCtMDBTVMovieReviews = @"movie/{id}/reviews";
static NSString * const kZCtMDBTVMovieLists = @"movie/{id}/lists";
static NSString * const kZCtMDBTVMovieChanges = @"movie/{id}/changes";
static NSString * const kZCtMDBTVMovieLatest = @"movie/latest";
static NSString * const kZCtMDBTVMovieUpcoming = @"movie/upcoming";
static NSString * const kZCtMDBTVMovieNowPlaying = @"movie/now_playing";
static NSString * const kZCtMDBTVMoviePopular = @"movie/popular";
static NSString * const kZCtMDBTVMovieTopRated = @"movie/top_rated";

#pragma mark - People
static NSString * const kZCtMDBTVPerson = @"person/{id}";
static NSString * const kZCtMDBTVPersonCredits = @"person/{id}/credits";
static NSString * const kZCtMDBTVPersonImages = @"person/{id}/images";
static NSString * const kZCtMDBTVPersonChanges = @"person/{id}/changes";
static NSString * const kZCtMDBTVPersonPopular = @"person/popular";
static NSString * const kZCtMDBTVPersonLatest = @"person/latest";

#pragma mark - Companies
static NSString * const kZCtMDBTVCompany = @"company/{id}";
static NSString * const kZCtMDBTVCompanyMovies = @"company/{id}/movies";

#pragma mark - Genres
static NSString * const kZCtMDBTVGenreList = @"genre/list";
static NSString * const kZCtMDBTVGenreMovies = @"genre/{id}/movies";

#pragma mark - Keywords
static NSString * const kZCtMDBTVKeyword = @"keyword/{id}";
static NSString * const kZCtMDBTVKeywordMovies = @"keyword/{id}/movies";


