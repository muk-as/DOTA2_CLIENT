#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xcb0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTAPropCustomTexture : public source2sdk::client::C_DynamicProp
        {
        public:
            // metadata: MNetworkEnable
            std::uint32_t m_unTeamID; // 0xc90            
            uint8_t _pad0c94[0xc]; // 0xc94
            bool m_bSetupMaterialProxy; // 0xca0            
            uint8_t _pad0ca1[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAPropCustomTexture because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAPropCustomTexture) == 0xcb0);
    };
};
