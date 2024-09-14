#pragma once
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4d0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CInfoDynamicShadowHint : public server::CPointEntity
    {
    public:
        bool m_bDisabled; // 0x4b8        
        [[maybe_unused]] std::uint8_t pad_0x4b9[0x3]; // 0x4b9
        float m_flRange; // 0x4bc        
        int32_t m_nImportance; // 0x4c0        
        int32_t m_nLightChoice; // 0x4c4        
        // m_hLight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLight;
        char m_hLight[0x4]; // 0x4c8        
        [[maybe_unused]] std::uint8_t pad_0x4cc[0x4];
        
        // Static fields:
        static CUtlVector<server::CInfoDynamicShadowHint*> &Get_m_AllHints() {return *reinterpret_cast<CUtlVector<server::CInfoDynamicShadowHint*>*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->GetStaticFields()[0]->m_pInstance);};
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoDynamicShadowHint because it is not a standard-layout class
    static_assert(sizeof(CInfoDynamicShadowHint) == 0x4d0);
};
