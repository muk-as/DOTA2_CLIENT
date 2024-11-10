#pragma once
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/EntComponentInfo_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x40
    // Has VTable
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CPropDataComponent : public entity2::CEntityComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0x8]; // 0x8
        float m_flDmgModBullet; // 0x10        
        float m_flDmgModClub; // 0x14        
        float m_flDmgModExplosive; // 0x18        
        float m_flDmgModFire; // 0x1c        
        CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x20        
        CUtlSymbolLarge m_iszBasePropData; // 0x28        
        int32_t m_nInteractions; // 0x30        
        bool m_bSpawnMotionDisabled; // 0x34        
        [[maybe_unused]] std::uint8_t pad_0x35[0x3]; // 0x35
        int32_t m_nDisableTakePhysicsDamageSpawnFlag; // 0x38        
        int32_t m_nMotionDisabledSpawnFlag; // 0x3c        
        
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPropDataComponent")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPropDataComponent")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPropDataComponent because it is not a standard-layout class
    static_assert(sizeof(CPropDataComponent) == 0x40);
};
