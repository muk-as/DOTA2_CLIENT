#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDynamicProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xae0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTAPropCustomTexture : public source2sdk::server::CDynamicProp
        {
        public:
            // metadata: MNetworkEnable
            std::uint32_t m_unTeamID; // 0xad0            
            uint8_t _pad0ad4[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPropCustomTexture because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAPropCustomTexture) == 0xae0);
    };
};
