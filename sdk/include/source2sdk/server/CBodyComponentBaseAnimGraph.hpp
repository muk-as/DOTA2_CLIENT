#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraphController.hpp"
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
        // Size: 0x910
        // Has VTable
        // Construct disallowed
        // 
        // static metadata: MNetworkVarNames "CBaseAnimGraphController m_animationController"
        #pragma pack(push, 1)
        class CBodyComponentBaseAnimGraph : public source2sdk::server::CBodyComponentSkeletonInstance
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::CBaseAnimGraphController m_animationController; // 0x510            
            uint8_t _pad0908[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBodyComponentBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBodyComponentBaseAnimGraph) == 0x910);
    };
};
