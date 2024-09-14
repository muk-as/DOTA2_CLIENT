#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/DOTA_SHOP_TYPE.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x18b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "DOTA_SHOP_TYPE m_ShopType"
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_Shop : public client::C_DOTA_BaseNPC_Building
    {
    public:
        // metadata: MNetworkEnable
        client::DOTA_SHOP_TYPE m_ShopType; // 0x1870        
        [[maybe_unused]] std::uint8_t pad_0x1874[0x24]; // 0x1874
        client::ParticleIndex_t m_nShopFX; // 0x1898        
        Vector m_vShopFXOrigin; // 0x189c        
        float m_flLastSpeech; // 0x18a8        
        [[maybe_unused]] std::uint8_t pad_0x18ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Shop because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Shop) == 0x18b0);
};
