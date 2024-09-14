#pragma once
#include "source2sdk/client/C_PointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x540
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsRadiantMiniboss"
    #pragma pack(push, 1)
    class C_DOTA_MinibossSpawner : public client::C_PointEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bIsRadiantMiniboss; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x539[0x7];
        
        // Static fields:
        static CUtlVector<client::C_DOTA_MinibossSpawner*> &Get_s_vecMinibossSpawners() {return *reinterpret_cast<CUtlVector<client::C_DOTA_MinibossSpawner*>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_DOTA_MinibossSpawner")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_MinibossSpawner because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_MinibossSpawner) == 0x540);
};
