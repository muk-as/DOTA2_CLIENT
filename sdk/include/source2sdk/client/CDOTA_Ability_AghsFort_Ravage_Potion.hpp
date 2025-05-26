#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"
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
        // Size: 0x748
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AghsFort_Ravage_Potion : public source2sdk::client::C_DOTA_Item
        {
        public:
            // m_hEntsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hEntsHit;
            char m_hEntsHit[0x18]; // 0x720            
            std::int32_t damage; // 0x738            
            float duration; // 0x73c            
            float spend_charge_delay; // 0x740            
            uint8_t _pad0744[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_Ravage_Potion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_AghsFort_Ravage_Potion) == 0x748);
    };
};
