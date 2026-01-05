#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"

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
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_iStoredRuneType"
        #pragma pack(push, 1)
        class CDOTA_Item_EmptyBottle : public source2sdk::server::CDOTA_Item
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnStoredRuneChanged"
            std::int32_t m_iStoredRuneType; // 0x_            
            source2sdk::entity2::GameTime_t m_fStoredRuneTime; // 0x_            
            source2sdk::entity2::GameTime_t m_fStoredRuneSpawnTime; // 0x_            
            float rune_expire_time; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_EmptyBottle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_EmptyBottle) == 0x_);
    };
};
