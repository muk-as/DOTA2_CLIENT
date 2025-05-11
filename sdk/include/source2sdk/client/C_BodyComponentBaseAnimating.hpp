#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBodyComponentSkeletonInstance.hpp"
#include "source2sdk/client/C_BaseAnimatingController.hpp"

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
        // Size: 0xaf0
        // Has VTable
        // Construct disallowed
        // 
        // static metadata: MNetworkVarNames "CBaseAnimatingController m_animationController"
        #pragma pack(push, 1)
        class C_BodyComponentBaseAnimating : public source2sdk::client::CBodyComponentSkeletonInstance
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::C_BaseAnimatingController m_animationController; // 0x510            
            uint8_t _pad0ae8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BodyComponentBaseAnimating because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BodyComponentBaseAnimating) == 0xaf0);
    };
};
