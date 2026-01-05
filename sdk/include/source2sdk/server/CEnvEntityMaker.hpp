#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        #pragma pack(push, 1)
        class CEnvEntityMaker : public source2sdk::server::CPointEntity
        {
        public:
            // metadata: MNotSaved
            Vector m_vecEntityMins; // 0x_            
            // metadata: MNotSaved
            Vector m_vecEntityMaxs; // 0x_            
            // m_hCurrentInstance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentInstance;
            char m_hCurrentInstance[0x_]; // 0x_            
            // m_hCurrentBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentBlocker;
            char m_hCurrentBlocker[0x_]; // 0x_            
            Vector m_vecBlockerOrigin; // 0x_            
            QAngle m_angPostSpawnDirection; // 0x_            
            float m_flPostSpawnDirectionVariance; // 0x_            
            float m_flPostSpawnSpeed; // 0x_            
            bool m_bPostSpawnUseAngles; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszTemplate; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_pOutputOnSpawned; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_pOutputOnFailedSpawn; // 0x_            
            
            // Datamap fields:
            // void InputForceSpawn; // 0x_
            // CUtlSymbolLarge InputForceSpawnAtEntityOrigin; // 0x_
            // void CEnvEntityMakerCheckSpawnThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvEntityMaker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvEntityMaker) == 0x_);
    };
};
