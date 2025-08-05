#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTA_SHOP_TYPE.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x19d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "DOTA_SHOP_TYPE m_ShopType"
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Shop : public source2sdk::server::CDOTA_BaseNPC_Building
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_SHOP_TYPE m_ShopType; // 0x19d0            
            uint8_t _pad19d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Shop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Shop) == 0x19d8);
    };
};
