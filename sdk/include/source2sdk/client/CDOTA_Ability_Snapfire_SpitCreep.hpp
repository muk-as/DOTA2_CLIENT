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
        // Size: 0x688
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Snapfire_SpitCreep : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_nDamagePerProjectile; // 0x680            
            // m_hGobbledUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGobbledUnit;
            char m_hGobbledUnit[0x4]; // 0x684            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Snapfire_SpitCreep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Snapfire_SpitCreep) == 0x688);
    };
};
