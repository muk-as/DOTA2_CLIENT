#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
        // Size: 0x6a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Seasonal_TI11_Balloon : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float charge_use_interval; // 0x680            
            float max_usable_charges; // 0x684            
            source2sdk::entity2::GameTime_t m_flLastChargeUseTime; // 0x688            
            // m_hBalloon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBalloon;
            char m_hBalloon[0x4]; // 0x68c            
            uint8_t _pad0690[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Seasonal_TI11_Balloon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Seasonal_TI11_Balloon) == 0x6a8);
    };
};
