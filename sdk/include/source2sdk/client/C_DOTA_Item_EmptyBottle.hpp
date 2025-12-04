#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_iStoredRuneType"
        #pragma pack(push, 1)
        class C_DOTA_Item_EmptyBottle : public source2sdk::client::C_DOTA_Item
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnStoredRuneChanged"
            std::int32_t m_iStoredRuneType; // 0x_            
            source2sdk::entity2::GameTime_t m_fStoredRuneTime; // 0x_            
            float rune_expire_time; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_EmptyBottle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_EmptyBottle) == 0x_);
    };
};
