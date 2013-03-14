#ifndef __REFRESHABLE_H__
#define __REFRESHABLE_H__
#include <set>

/*
 * Implementations of this interface have state that can be periodically refreshed. For example, an implementation instance might contain some pre-computed information that should be periodically refreshed.
 * The #refresh(set) method triggers such a refresh.
 *
 * All Taste components implement this. In particular,
 * Recommenders do. Callers may want to call
 * #refresh(set) periodically to re-compute information throughout the system and bring it up to date, though this operation may be expensve.
 *
 */

class Refreshable {

	/*
	 * Triggers "refresh" -- whatever that means -- of the implementation.
	 */
	virtual void refresh(set<Refreshable> already_refreshed) = 0;

#endif	//__REFRESHABLE_H__
