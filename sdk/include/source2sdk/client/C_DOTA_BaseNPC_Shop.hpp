#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/DOTA_SHOP_TYPE.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1888
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "DOTA_SHOP_TYPE m_ShopType"
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Shop : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_SHOP_TYPE m_ShopType; // 0x1848            
            uint8_t _pad184c[0x24]; // 0x184c
            source2sdk::client::ParticleIndex_t m_nShopFX; // 0x1870            
            Vector m_vShopFXOrigin; // 0x1874            
            float m_flLastSpeech; // 0x1880            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Shop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Shop) == 0x1888);
    };
};
