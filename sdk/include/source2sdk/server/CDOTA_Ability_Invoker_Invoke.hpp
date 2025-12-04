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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_Invoke : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t max_invoked_spells; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CDOTA_Modifier_Invoker_Instance* m_instances[3]; // 0x_            
            std::int32_t m_nCurInstanceSlot; // 0x_            
            bool m_bInvokedAbilitiesInitialized; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_invokedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_invokedAbilities[10];
            char m_invokedAbilities[0x_]; // 0x_            
            Vector m_vecCurrentColor; // 0x_            
            std::int32_t m_nQuasInstances; // 0x_            
            std::int32_t m_nExortInstances; // 0x_            
            std::int32_t m_nWexInstances; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_Invoke because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_Invoke) == 0x_);
    };
};
