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
        // Size: 0x620
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_Invoke : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t max_invoked_spells; // 0x5b8            
            uint8_t _pad05bc[0x4]; // 0x5bc
            source2sdk::server::CDOTA_Modifier_Invoker_Instance* m_instances[3]; // 0x5c0            
            std::int32_t m_nCurInstanceSlot; // 0x5d8            
            bool m_bInvokedAbilitiesInitialized; // 0x5dc            
            uint8_t _pad05dd[0x3]; // 0x5dd
            // m_invokedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_invokedAbilities[10];
            char m_invokedAbilities[0x28]; // 0x5e0            
            Vector m_vecCurrentColor; // 0x608            
            std::int32_t m_nQuasInstances; // 0x614            
            std::int32_t m_nExortInstances; // 0x618            
            std::int32_t m_nWexInstances; // 0x61c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_Invoke because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_Invoke) == 0x620);
    };
};
