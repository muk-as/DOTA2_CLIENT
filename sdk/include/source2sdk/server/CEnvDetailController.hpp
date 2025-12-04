#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "float32 m_flFadeStartDist"
        // static metadata: MNetworkVarNames "float32 m_flFadeEndDist"
        #pragma pack(push, 1)
        class CEnvDetailController : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flFadeStartDist; // 0x_            
            // metadata: MNetworkEnable
            float m_flFadeEndDist; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvDetailController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvDetailController) == 0x_);
    };
};
