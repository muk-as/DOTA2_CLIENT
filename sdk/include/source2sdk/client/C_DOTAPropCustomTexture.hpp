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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xac0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTAPropCustomTexture : public source2sdk::client::C_DynamicProp
        {
        public:
            // metadata: MNetworkEnable
            std::uint32_t m_unTeamID; // 0xaa8            
            uint8_t _pad0aac[0xc]; // 0xaac
            bool m_bSetupMaterialProxy; // 0xab8            
            uint8_t _pad0ab9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAPropCustomTexture because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAPropCustomTexture) == 0xac0);
    };
};
