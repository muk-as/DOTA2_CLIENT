#pragma once
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/Hull_t.hpp"
#include "source2sdk/server/CBaseFlex.hpp"
#include "source2sdk/server/RelationshipOverride_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CEconWearable;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8b8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
    #pragma pack(push, 1)
    class CBaseCombatCharacter : public server::CBaseFlex
    {
    public:
        bool m_bForceServerRagdoll; // 0x828        
        [[maybe_unused]] std::uint8_t pad_0x829[0x7]; // 0x829
        // metadata: MNetworkEnable
        // m_hMyWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CEconWearable>> m_hMyWearables;
        char m_hMyWearables[0x18]; // 0x830        
        float m_impactEnergyScale; // 0x848        
        client::HitGroup_t m_LastHitGroup; // 0x84c        
        bool m_bApplyStressDamage; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x851[0x47]; // 0x851
        int32_t m_iDamageCount; // 0x898        
        [[maybe_unused]] std::uint8_t pad_0x89c[0x4]; // 0x89c
        // m_pVecRelationships has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::RelationshipOverride_t>* m_pVecRelationships;
        char m_pVecRelationships[0x8]; // 0x8a0        
        CUtlSymbolLarge m_strRelationships; // 0x8a8        
        client::Hull_t m_eHull; // 0x8b0        
        uint32_t m_nNavHullIdx; // 0x8b4        
        
        // Static fields:
        static int32_t &Get_sm_lastInteraction() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->GetStaticFields()[0]->m_pInstance);};
        
        // Datamap fields:
        // void InputBecomeServerRagdoll; // 0x0
        // CUtlSymbolLarge InputSetRelationship; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseCombatCharacter because it is not a standard-layout class
    static_assert(sizeof(CBaseCombatCharacter) == 0x8b8);
};
