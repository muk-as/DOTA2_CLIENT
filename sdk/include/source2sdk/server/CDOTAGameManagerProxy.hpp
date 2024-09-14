#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTAGameManager;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CDOTAGameManager * m_pGameManager"
    #pragma pack(push, 1)
    class CDOTAGameManagerProxy : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "CDOTAGameManager*"
        server::CDOTAGameManager* m_pGameManager; // 0x4b8        
        
        // Static fields:
        static server::CDOTAGameManagerProxy* &Get_s_pGameManagerProxy() {return *reinterpret_cast<server::CDOTAGameManagerProxy**>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CDOTAGameManagerProxy")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAGameManagerProxy because it is not a standard-layout class
    static_assert(sizeof(CDOTAGameManagerProxy) == 0x4c0);
};
