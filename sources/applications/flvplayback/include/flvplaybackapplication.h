/* 
 *  Copyright (c) 2010,
 *  Gavriloaie Eugen-Andrei (shiretu@gmail.com)
 *
 *  This file is part of crtmpserver.
 *  crtmpserver is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  crtmpserver is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with crtmpserver.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef _FLVPLAYBACKAPPLICATION_H
#define _FLVPLAYBACKAPPLICATION_H

#include "application/baseclientapplication.h"

namespace app_flvplayback {
#ifdef HAS_PROTOCOL_RTMP
	class RTMPAppProtocolHandler;
#endif /* HAS_PROTOCOL_RTMP */
#ifdef HAS_PROTOCOL_RTMFP
	class RTMFPAppProtocolHandler;
#endif /* HAS_PROTOCOL_RTMFP */
#ifdef HAS_PROTOCOL_LIVEFLV
	class LiveFLVAppProtocolHandler;
#endif /* HAS_PROTOCOL_LIVEFLV */
#ifdef HAS_PROTOCOL_TS
	class TSAppProtocolHandler;
#endif /* HAS_PROTOCOL_TS */
#ifdef HAS_PROTOCOL_RTP
	class RTPAppProtocolHandler;
	class RTSPAppProtocolHandler;
#endif /* HAS_PROTOCOL_RTP */

	class FLVPlaybackApplication
	: public BaseClientApplication {
	private:
#ifdef HAS_PROTOCOL_RTMP
		RTMPAppProtocolHandler *_pRTMPHandler;
#endif /* HAS_PROTOCOL_RTMP */
#ifdef HAS_PROTOCOL_RTMFP
		RTMFPAppProtocolHandler *_pRTMFPHandler;
#endif /* HAS_PROTOCOL_RTMFP */
#ifdef HAS_PROTOCOL_LIVEFLV
		LiveFLVAppProtocolHandler *_pLiveFLV;
#endif /* HAS_PROTOCOL_LIVEFLV */
#ifdef HAS_PROTOCOL_TS
		TSAppProtocolHandler *_pTS;
#endif /* HAS_PROTOCOL_TS */
#ifdef HAS_PROTOCOL_RTP
		RTPAppProtocolHandler *_pRTP;
		RTSPAppProtocolHandler *_pRTSP;
#endif /* HAS_PROTOCOL_RTP */
	public:
		FLVPlaybackApplication(Variant &configuration);
		virtual ~FLVPlaybackApplication();

		virtual bool Initialize();
	};
}

#endif	/* _FLVPLAYBACKAPPLICATION_H */


