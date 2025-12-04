#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // 
        // static metadata: MNetworkVarNames "float32 m_flLightScale"
        // static metadata: MNetworkVarNames "float32 m_Radius"
        #pragma pack(push, 1)
        class CSpotlightEnd : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flLightScale; // 0x_            
            // metadata: MNetworkEnable
            float m_Radius; // 0x_            
            Vector m_vSpotlightDir; // 0x_            
            Vector m_vSpotlightOrg; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSpotlightEnd because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSpotlightEnd) == 0x_);
    };
};
