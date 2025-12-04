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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
        // static metadata: MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
        #pragma pack(push, 1)
        class CBaseCombatCharacter : public source2sdk::server::CBaseFlex
        {
        public:
            bool m_bForceServerRagdoll; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_hMyWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CEconWearable>> m_hMyWearables;
            char m_hMyWearables[0x_]; // 0x_            
            float m_impactEnergyScale; // 0x_            
            std::int32_t m_nMinVehicleDamageToTempRagdoll; // 0x_            
            bool m_bApplyStressDamage; // 0x_            
            bool m_bDeathEventsDispatched; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_pVecRelationships has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RelationshipOverride_t>* m_pVecRelationships;
            char m_pVecRelationships[0x_]; // 0x_            
            CUtlSymbolLarge m_strRelationships; // 0x_            
            source2sdk::client::Hull_t m_eHull; // 0x_            
            std::uint32_t m_nNavHullIdx; // 0x_            
            source2sdk::server::CMovementStatsProperty m_movementStats; // 0x_            
            
            // Datamap fields:
            // void InputBecomeServerRagdoll; // 0x_
            // CUtlSymbolLarge InputSetRelationship; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseCombatCharacter) == 0x_);
    };
};
