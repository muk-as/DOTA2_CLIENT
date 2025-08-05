#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CPropDataComponent.hpp"
#include "source2sdk/server/EOverrideBlockLOS_t.hpp"
#include "source2sdk/server/Explosions.hpp"
#include "source2sdk/server/Materials.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
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
        // Size: 0x8c8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
        #pragma pack(push, 1)
        class CBreakable : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad07f0[0x8]; // 0x7f0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPropDataComponent"
            // metadata: MNetworkAlias "CPropDataComponent"
            // metadata: MNetworkTypeAlias "CPropDataComponent"
            source2sdk::server::CPropDataComponent m_CPropDataComponent; // 0x7f8            
            source2sdk::server::Materials m_Material; // 0x838            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0x83c            
            source2sdk::server::Explosions m_Explosion; // 0x840            
            uint8_t _pad0844[0x4]; // 0x844
            CUtlSymbolLarge m_iszSpawnObject; // 0x848            
            float m_flPressureDelay; // 0x850            
            std::int32_t m_iMinHealthDmg; // 0x854            
            CUtlSymbolLarge m_iszPropData; // 0x858            
            float m_impactEnergyScale; // 0x860            
            source2sdk::server::EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x864            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0x868            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x28]; // 0x890            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0x8b8            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0x8bc            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x8c0            
            uint8_t _pad08c4[0x4];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // float InputSetMass; // 0x0
            // void CBreakableDie; // 0x0
            // int32_t material; // 0x7fffffff
            // int32_t spawnobject; // 0x7fffffff
            // int32_t propdata; // 0x7fffffff
            // int64_t gamemass; // 0x7fffffff
            // Vector masscenteroffset; // 0x7fffffff
            // float massScale; // 0x7fffffff
            // float buoyancyscale; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBreakable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBreakable) == 0x8c8);
    };
};
