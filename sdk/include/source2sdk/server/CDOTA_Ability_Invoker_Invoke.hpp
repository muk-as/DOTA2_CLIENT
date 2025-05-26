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
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Modifier_Invoker_Instance;
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
        // Size: 0x628
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_Invoke : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t max_invoked_spells; // 0x5c0            
            uint8_t _pad05c4[0x4]; // 0x5c4
            source2sdk::server::CDOTA_Modifier_Invoker_Instance* m_instances[3]; // 0x5c8            
            std::int32_t m_nCurInstanceSlot; // 0x5e0            
            bool m_bInvokedAbilitiesInitialized; // 0x5e4            
            uint8_t _pad05e5[0x3]; // 0x5e5
            // m_invokedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_invokedAbilities[10];
            char m_invokedAbilities[0x28]; // 0x5e8            
            Vector m_vecCurrentColor; // 0x610            
            std::int32_t m_nQuasInstances; // 0x61c            
            std::int32_t m_nExortInstances; // 0x620            
            std::int32_t m_nWexInstances; // 0x624            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_Invoke because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_Invoke) == 0x628);
    };
};
