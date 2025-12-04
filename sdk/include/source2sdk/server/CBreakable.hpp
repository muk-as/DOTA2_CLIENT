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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
        #pragma pack(push, 1)
        class CBreakable : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPropDataComponent"
            // metadata: MNetworkAlias "CPropDataComponent"
            // metadata: MNetworkTypeAlias "CPropDataComponent"
            source2sdk::server::CPropDataComponent m_CPropDataComponent; // 0x_            
            source2sdk::server::Materials m_Material; // 0x_            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBreaker;
            char m_hBreaker[0x_]; // 0x_            
            source2sdk::server::Explosions m_Explosion; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszSpawnObject; // 0x_            
            float m_flPressureDelay; // 0x_            
            std::int32_t m_iMinHealthDmg; // 0x_            
            CUtlSymbolLarge m_iszPropData; // 0x_            
            float m_impactEnergyScale; // 0x_            
            source2sdk::server::EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0x_            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x_]; // 0x_            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0x_            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x_]; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputBreak; // 0x_
            // int32_t InputSetHealth; // 0x_
            // int32_t InputAddHealth; // 0x_
            // int32_t InputRemoveHealth; // 0x_
            // float InputSetMass; // 0x_
            // void CBreakableDie; // 0x_
            // int32_t material; // 0x_
            // int32_t spawnobject; // 0x_
            // int32_t propdata; // 0x_
            // int64_t gamemass; // 0x_
            // Vector masscenteroffset; // 0x_
            // float massScale; // 0x_
            // float buoyancyscale; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBreakable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBreakable) == 0x_);
    };
};
