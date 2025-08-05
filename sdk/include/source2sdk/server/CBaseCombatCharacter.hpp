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
        // Size: 0x958
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
        // static metadata: MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
        #pragma pack(push, 1)
        class CBaseCombatCharacter : public source2sdk::server::CBaseFlex
        {
        public:
            bool m_bForceServerRagdoll; // 0x890            
            uint8_t _pad0891[0x7]; // 0x891
            // metadata: MNetworkEnable
            // m_hMyWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CEconWearable>> m_hMyWearables;
            char m_hMyWearables[0x18]; // 0x898            
            float m_impactEnergyScale; // 0x8b0            
            std::int32_t m_nMinVehicleDamageToTempRagdoll; // 0x8b4            
            bool m_bApplyStressDamage; // 0x8b8            
            bool m_bDeathEventsDispatched; // 0x8b9            
            uint8_t _pad08ba[0x46]; // 0x8ba
            // m_pVecRelationships has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RelationshipOverride_t>* m_pVecRelationships;
            char m_pVecRelationships[0x8]; // 0x900            
            CUtlSymbolLarge m_strRelationships; // 0x908            
            source2sdk::client::Hull_t m_eHull; // 0x910            
            std::uint32_t m_nNavHullIdx; // 0x914            
            source2sdk::server::CMovementStatsProperty m_movementStats; // 0x918            
            
            // Datamap fields:
            // void InputBecomeServerRagdoll; // 0x0
            // CUtlSymbolLarge InputSetRelationship; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseCombatCharacter) == 0x958);
    };
};
