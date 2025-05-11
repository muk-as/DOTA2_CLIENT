#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x64
        // Has Trivial Constructor
        // Has Trivial Destructor
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        struct dynpitchvol_base_t
        {
        public:
            std::int32_t preset; // 0x0            
            std::int32_t pitchrun; // 0x4            
            std::int32_t pitchstart; // 0x8            
            std::int32_t spinup; // 0xc            
            std::int32_t spindown; // 0x10            
            std::int32_t volrun; // 0x14            
            std::int32_t volstart; // 0x18            
            std::int32_t fadein; // 0x1c            
            std::int32_t fadeout; // 0x20            
            std::int32_t lfotype; // 0x24            
            std::int32_t lforate; // 0x28            
            std::int32_t lfomodpitch; // 0x2c            
            std::int32_t lfomodvol; // 0x30            
            std::int32_t cspinup; // 0x34            
            std::int32_t cspincount; // 0x38            
            std::int32_t pitch; // 0x3c            
            std::int32_t spinupsav; // 0x40            
            std::int32_t spindownsav; // 0x44            
            std::int32_t pitchfrac; // 0x48            
            std::int32_t vol; // 0x4c            
            std::int32_t fadeinsav; // 0x50            
            std::int32_t fadeoutsav; // 0x54            
            std::int32_t volfrac; // 0x58            
            std::int32_t lfofrac; // 0x5c            
            std::int32_t lfomult; // 0x60            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, preset) == 0x0);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, pitchrun) == 0x4);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, pitchstart) == 0x8);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, spinup) == 0xc);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, spindown) == 0x10);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, volrun) == 0x14);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, volstart) == 0x18);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, fadein) == 0x1c);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, fadeout) == 0x20);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, lfotype) == 0x24);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, lforate) == 0x28);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, lfomodpitch) == 0x2c);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, lfomodvol) == 0x30);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, cspinup) == 0x34);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, cspincount) == 0x38);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, pitch) == 0x3c);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, spinupsav) == 0x40);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, spindownsav) == 0x44);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, pitchfrac) == 0x48);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, vol) == 0x4c);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, fadeinsav) == 0x50);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, fadeoutsav) == 0x54);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, volfrac) == 0x58);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, lfofrac) == 0x5c);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, lfomult) == 0x60);
        
        static_assert(sizeof(source2sdk::server::dynpitchvol_base_t) == 0x64);
    };
};
