#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Lion_Impale : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float width; // 0x_            
            float duration; // 0x_            
            std::int32_t speed; // 0x_            
            float length_buffer; // 0x_            
            float range; // 0x_            
            std::int32_t m_iDefaultCastRange; // 0x_            
            std::int32_t pierces_immunity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Lion_Impale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Lion_Impale) == 0x_);
    };
};
