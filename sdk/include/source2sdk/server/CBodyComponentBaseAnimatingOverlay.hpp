#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimatingOverlayController.hpp"
#include "source2sdk/server/CBodyComponentSkeletonInstance.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0xa60
        // Has VTable
        // Construct disallowed
        // 
        // static metadata: MNetworkVarNames "CBaseAnimatingOverlayController m_animationController"
        #pragma pack(push, 1)
        class CBodyComponentBaseAnimatingOverlay : public source2sdk::server::CBodyComponentSkeletonInstance
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::CBaseAnimatingOverlayController m_animationController; // 0x520            
            uint8_t _pad0a58[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBodyComponentBaseAnimatingOverlay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBodyComponentBaseAnimatingOverlay) == 0xa60);
    };
};
