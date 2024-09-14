#pragma once
#include "source2sdk/client/DOTA_SHOP_TYPE.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1928
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "DOTA_SHOP_TYPE m_ShopType"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Shop : public server::CDOTA_BaseNPC_Building
    {
    public:
        // metadata: MNetworkEnable
        client::DOTA_SHOP_TYPE m_ShopType; // 0x1920        
        [[maybe_unused]] std::uint8_t pad_0x1924[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Shop because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Shop) == 0x1928);
};
