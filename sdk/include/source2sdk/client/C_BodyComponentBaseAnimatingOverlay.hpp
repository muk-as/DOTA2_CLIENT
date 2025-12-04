#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBodyComponentSkeletonInstance.hpp"
#include "source2sdk/client/C_BaseAnimatingOverlayController.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct disallowed
        // 
        // static metadata: MNetworkVarNames "CBaseAnimatingOverlayController m_animationController"
        #pragma pack(push, 1)
        class C_BodyComponentBaseAnimatingOverlay : public source2sdk::client::CBodyComponentSkeletonInstance
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::C_BaseAnimatingOverlayController m_animationController; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BodyComponentBaseAnimatingOverlay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BodyComponentBaseAnimatingOverlay) == 0x_);
    };
};
