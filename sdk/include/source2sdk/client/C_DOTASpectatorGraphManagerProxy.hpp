#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTASpectatorGraphManager;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x540
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "C_DOTASpectatorGraphManager * m_pGraphManager"
    #pragma pack(push, 1)
    class C_DOTASpectatorGraphManagerProxy : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "CDOTASpectatorGraphManager*"
        client::C_DOTASpectatorGraphManager* m_pGraphManager; // 0x538        
        
        // Static fields:
        static client::C_DOTASpectatorGraphManagerProxy* &Get_s_pDotaSpectatorGraphProxy() {return *reinterpret_cast<client::C_DOTASpectatorGraphManagerProxy**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_DOTASpectatorGraphManagerProxy")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTASpectatorGraphManagerProxy because it is not a standard-layout class
    static_assert(sizeof(C_DOTASpectatorGraphManagerProxy) == 0x540);
};
