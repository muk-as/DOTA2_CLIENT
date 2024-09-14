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
    class CDOTASpectatorGraphManager;
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
    // static metadata: MNetworkVarNames "CDOTASpectatorGraphManager * m_pGraphManager"
    #pragma pack(push, 1)
    class CDOTASpectatorGraphManagerProxy : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "CDOTASpectatorGraphManager*"
        server::CDOTASpectatorGraphManager* m_pGraphManager; // 0x4b8        
        
        // Static fields:
        static server::CDOTASpectatorGraphManagerProxy* &Get_s_pDotaSpectatorGraphProxy() {return *reinterpret_cast<server::CDOTASpectatorGraphManagerProxy**>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CDOTASpectatorGraphManagerProxy")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTASpectatorGraphManagerProxy because it is not a standard-layout class
    static_assert(sizeof(CDOTASpectatorGraphManagerProxy) == 0x4c0);
};
