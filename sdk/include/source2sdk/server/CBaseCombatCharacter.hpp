#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Hull_t.hpp"
#include "source2sdk/server/CBaseFlex.hpp"
#include "source2sdk/server/CMovementStatsProperty.hpp"
#include "source2sdk/server/RelationshipOverride_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CEconWearable;
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
        // Size: 0x938
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
        // static metadata: MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
        #pragma pack(push, 1)
        class CBaseCombatCharacter : public source2sdk::server::CBaseFlex
        {
        public:
            bool m_bForceServerRagdoll; // 0x868            
            uint8_t _pad0869[0x7]; // 0x869
            // metadata: MNetworkEnable
            // m_hMyWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CEconWearable>> m_hMyWearables;
            char m_hMyWearables[0x18]; // 0x870            
            float m_impactEnergyScale; // 0x888            
            std::int32_t m_nMinVehicleDamageToTempRagdoll; // 0x88c            
            bool m_bApplyStressDamage; // 0x890            
            bool m_bDeathEventsDispatched; // 0x891            
            uint8_t _pad0892[0x46]; // 0x892
            std::int32_t m_iDamageCount; // 0x8d8            
            uint8_t _pad08dc[0x4]; // 0x8dc
            // m_pVecRelationships has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RelationshipOverride_t>* m_pVecRelationships;
            char m_pVecRelationships[0x8]; // 0x8e0            
            CUtlSymbolLarge m_strRelationships; // 0x8e8            
            source2sdk::client::Hull_t m_eHull; // 0x8f0            
            std::uint32_t m_nNavHullIdx; // 0x8f4            
            source2sdk::server::CMovementStatsProperty m_movementStats; // 0x8f8            
            
            // Datamap fields:
            // void InputBecomeServerRagdoll; // 0x0
            // CUtlSymbolLarge InputSetRelationship; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseCombatCharacter) == 0x938);
    };
};
