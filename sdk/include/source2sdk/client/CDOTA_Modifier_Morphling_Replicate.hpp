#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_EconItemView;
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Morphling_Replicate : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTinyTreeWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTinyTreeWearable;
            char m_hTinyTreeWearable[0x_]; // 0x_            
            float m_flBaseAttackRange; // 0x_            
            float m_flBaseMovementSpeed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszModelName; // 0x_            
            CUtlSymbolLarge m_iszProjectileName; // 0x_            
            source2sdk::client::HeroFacetKey_t m_nFacetKey; // 0x_            
            CUtlSymbolLarge m_iszOriginalModel; // 0x_            
            source2sdk::client::HeroID_t m_nCopiedHeroID; // 0x_            
            float m_fOriginalModelScale; // 0x_            
            // m_vecOriginalItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_EconItemView*> m_vecOriginalItems;
            char m_vecOriginalItems[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flOriginalStr; // 0x_            
            float m_flOriginalAgi; // 0x_            
            float m_flOriginalInt; // 0x_            
            std::int32_t m_iOriginalAttackCapability; // 0x_            
            float m_flOriginalHealthPercentage; // 0x_            
            float m_flOriginalManaPercentage; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_Replicate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Morphling_Replicate) == 0x_);
    };
};
