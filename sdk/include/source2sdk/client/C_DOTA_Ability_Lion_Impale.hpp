#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
        // Size: 0x6c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Lion_Impale : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float width; // 0x688            
            float duration; // 0x68c            
            std::int32_t speed; // 0x690            
            float length_buffer; // 0x694            
            float range; // 0x698            
            std::int32_t m_iDefaultCastRange; // 0x69c            
            std::int32_t pierces_immunity; // 0x6a0            
            uint8_t _pad06a4[0x4]; // 0x6a4
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x6a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Lion_Impale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Lion_Impale) == 0x6c0);
    };
};
