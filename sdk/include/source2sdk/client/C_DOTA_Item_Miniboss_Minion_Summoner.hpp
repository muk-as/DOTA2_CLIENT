#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x660
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bItemActivated"
        #pragma pack(push, 1)
        class C_DOTA_Item_Miniboss_Minion_Summoner : public source2sdk::client::C_DOTA_Item
        {
        public:
            source2sdk::entity2::GameTime_t m_fEquipTime; // 0x650            
            source2sdk::entity2::GameTime_t m_flActivatedTime; // 0x654            
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x658            
            // metadata: MNetworkEnable
            bool m_bItemActivated; // 0x65c            
            uint8_t _pad065d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_Miniboss_Minion_Summoner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_Miniboss_Minion_Summoner) == 0x660);
    };
};
