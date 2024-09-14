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
    class C_DOTAGameManager;
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
    // static metadata: MNetworkVarNames "CDOTAGameManager * m_pGameManager"
    #pragma pack(push, 1)
    class C_DOTAGameManagerProxy : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "CDOTAGameManager*"
        client::C_DOTAGameManager* m_pGameManager; // 0x538        
        
        // Static fields:
        static client::C_DOTAGameManagerProxy* &Get_s_pGameManagerProxy() {return *reinterpret_cast<client::C_DOTAGameManagerProxy**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_DOTAGameManagerProxy")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTAGameManagerProxy because it is not a standard-layout class
    static_assert(sizeof(C_DOTAGameManagerProxy) == 0x540);
};
