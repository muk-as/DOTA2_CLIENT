#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bItemActivated"
        #pragma pack(push, 1)
        class CDOTA_Item_Miniboss_Minion_Summoner : public source2sdk::server::CDOTA_Item
        {
        public:
            source2sdk::entity2::GameTime_t m_fEquipTime; // 0x690            
            source2sdk::entity2::GameTime_t m_flActivatedTime; // 0x694            
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x698            
            // metadata: MNetworkEnable
            bool m_bItemActivated; // 0x69c            
            uint8_t _pad069d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Miniboss_Minion_Summoner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_Miniboss_Minion_Summoner) == 0x6a0);
    };
};
